#include <stdbool.h>

typedef struct {
    int dia, mes, ano;
} Data;

typedef struct Comentario Comentario;

struct Comentario {
    int idComent;
    char coment[512];
    Data dataComent;
    Comentario *respostas[100];
    int numRespostas;
};

typedef struct {
    int idPost;
    int idFoto;
    Data dataPublicacao;
    char texto[300];
    int numCurtidas;
    int numComentarios;
    Comentario comentarios[100];
} Post;

typedef struct {
    int cpf;
    char userName[32];
    char email[32];
    char senha[64];
} Credenciais;

typedef struct {
    bool logado;
    int idUsuario;
    char nomePerfil[32];
    int numAmigos;
    int listaAmigos[1000];
    Credenciais credenciais;
    int idFotoPerfil;
    Data dataNas;
    Post posts[128];

} Usuario;


//Informações básicas que normalmente se fornecem ao criar uma conta em uma rede social.
Usuario criarConta(int cpf, char email[32], char userName[32], char senha[64], char nomePerfil[32], Data data);

//Nome de usuario e senha para que o login seja efetudo. Caso as credenciais estejam corretar, ele muda o estado da conta para true, indicando 
//que o usuário está logado, além, é claro, de retorna o id do usuário que logou. 
int logar(char userName[32], char senha[64]);

//Retorna false para o atributo "logado".
bool deslogar(int idPerfil);

//Nessa função, é necessário o id do perfil -- gerado no momento que você cria sua conta -- 
//para que então vocẽ altere a foto utilizando o id de alguma imagem já existente na internet. 
//O usuário escolhe a foto e imadiatamente é identificado o id dela. 
void editarFotoPerfil(int idPerfil, int idNovaFoto);

//Mesma coisa, vocẽ só insere um novo nome. O id já é captado automaticamente pois você já está logado.
void editarNomePerfil(int idPerfil, char novoNomePerfil[32]);

//O usuário deve inserir uma struct do tipo Data. Mais uma vez, o id do perfil é preciso para que 
//outro usuário não tenha sua data de nascimento alterada.
void editarDataNasc(int idPerfil, Data novaDataNasc);

//Retorna uma struct do tipo Post, na qual pode ter uma foto ou somente texto. O id do post é gerado automaticamente e é atrelado
//ao id do perfil do usuário.
Post postar(int idFoto, char texto[300], int idUsuario);

//Verifica se o id do usuário que executa a ação de excluir o post é o mesmo de quem o criou e então o apaga. 
void apagarPost(int idPost, int idUsuario);

//Pega o id do usuário que solicitou amizade e o id com quem ele deseja amigar. 
//Se o outro usuário aceitar, o id de cada um fica na lista de amigos um do outro. 
void mandarSolicAmiz(int idUsuario, int idUsuarioAmigo);

//Mais uma vez é necessário o id de ambos para que quando aceita a solicitação, o id de ambos se encaminhe para as listas.
//Nessa função, há o retorno de true ou false a depender se o usuário deseja ou não amigar.
bool aceitarSolicAmiz(bool resposta, int idUsuario, int idUsuarioAmigo);

//Caso o usuário deseje retirar uma solicitação, é necessário o seu id e o do outro indivíduo.
void retirarSolicAmiz(int idUsuario, int idUsuarioAmigo);

//É preciso o id do usuário e o do post, para que quem postou saiba quem curtiu sua publicação e assim sejam contabilizadas
//as curtidas.
void curtirPost(int idUsuario, int idPost);

//Requisita dos mesmos parâmetros da função anterior, porém essa representa um decremento no número
//de usuários que curtiram determinado post.
void retirarCurtidaPost(int idUsuario, int Idpost);

//Retorna uma struct do tipo Comentario que pode estar presente tanto em um array "comentarios" de um post quanto de "respostas" de um comentário.
Comentario comentar(int idPostOuComent, char texto[512], int idUsuario);

//Verifica se o id do comentario está atrelado ao usuário que solicita a edição. "IdPostOuComent" diz respeito
//a qual post ou outro comentário esse comentário pertece.
void editarComentario(int idPostOuComent, int idComent, char novoTexto[512], int idUsuario);

//Novamente, id do usuário e do comentario para que tudo seja efetuado.
void excluirComentario(int idComent, int idUsuario);

//Não retorna nada. O parâmetro serve para identificar a conta a ser excluída.
void excluirConta(int idUsuario);
