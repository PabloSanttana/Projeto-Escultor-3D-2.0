<h1 align="center">Projeto Escultor 3D 2.0</h1>
<p align="center">🚀 Projeto para construir escultura 3D</p>

Projeto desenvolvido por <strong> Guilherme Pablo De Santana Maciel </strong>

### 🛠 Tecnologia Utilizadas no Desenvolvimento 

As seguintes ferramentas foram usadas na construção do projeto:

- [C++](http://www.cplusplus.org/)   
- [Qt creator](https://www.qt.io/download)      
- [Doxygen](https://www.doxygen.nl/index.html)
- [MeshLab](https://www.meshlab.net/)


## Informação do projeto
O projeto consiste em manipulações de matrizes tridimensionais possuem dimensões de largura, altura e largura especificadas pelo usuário, onde os índices dos elementos nessa matriz coresponderiam às posições dos voxels que é é definido como um struct no espaço discreto.

#### Tabela referente as posições 

![tabela](https://github.com/PabloSanttana/Projeto-Escultor-3D-1.0/blob/master/images/tabelaExemplo.png)

##### Resultado da tabela anterior 

![Cupo](https://github.com/PabloSanttana/Projeto-Escultor-3D-1.0/blob/master/images/Cubo.png)

<h3 align="center">
    Exemplos de Esculturas
</h3>

#### Notebook

![notebook](https://github.com/PabloSanttana/Projeto-Escultor-3D-1.0/blob/master/images/Notebook.png)

#### Bob Esponja

![bobEsponja](https://github.com/PabloSanttana/Projeto-Escultor-3D-1.0/blob/master/images/bobEsponja.png)

### Melancia

![melancia](https://github.com/PabloSanttana/Projeto-Escultor-3D-1.0/blob/master/images/melacia.png)

### Documentação do projeto 
 
 [Documentação](https://pablosanttana.github.io/Projeto-Escultor-3D-2.0/html/annotated.html)
 
 
### Pré-requisitos

Antes de começar, você vai precisar ter instalado em sua máquina as seguintes ferramentas:
[Git](https://git-scm.com), [Qt creator](https://www.qt.io/download) e [MeshLab](https://www.meshlab.net/).

### 🎲 Rodando o projeto

```bash
# Clone este repositório
$ git clone <https://github.com/PabloSanttana/Projeto-Escultor-3D-2.0.git>

# Execute o Qt Creator é abra a pasta como um projeto e pronto.

 ```
 
 #### Mais Informações
 
 Projeto Proposto pelo Professor Agostinho Brito do  <a href="https://www.dca.ufrn.br/"> DEPARTAMENTO DE ENGENHARIA DE COMPUTAÇÃO E AUTOMAÇÃO UNIVERSIDADE FEDERAL DO RIO GRANDE DO NORTE </a>
 
 para mais informação <a href="https://agostinhobritojr.github.io/curso/progav-dca1202/escultor.html">clique aqui<a/>
 
 
 #### Exemplo de uso
 
 ```bash
 int main()
{
    Sculptor *s1;

    vector<FiguraGeometrica*> figs;

    Interpretador parser;
    
    figs = parser.parse("../escultor.txt"); // aqui você coloca o caminho de seu arquivo que será utilizado 

    s1 = new Sculptor(parser.getDimx(),parser.getDimy(),parser.getDimz());

    for(size_t i=0; i<figs.size();i++){
        cout<<"draw \n";
        figs[i] ->draw(*s1);
    }

    s1 ->writeOFF((char*)"ClasseAbstrada.off"); // nome do arquivo que será salvo

    for(size_t i=0; i<figs.size();i++){

        delete figs[i];
    }

    delete s1;

    cout << "Hello World!" << endl;
    return 0;
}
 
 ```
 
 #### Exemplo de  um arquivo txt
 
 ![arquivo.txt]( https://github.com/PabloSanttana/Projeto-Escultor-3D-2.0/blob/master/images/textExemplo.png)
 
 
 ![exemplo](https://github.com/PabloSanttana/Projeto-Escultor-3D-2.0/blob/master/images/putbox.png)
 
 ![exemplo2](https://github.com/PabloSanttana/Projeto-Escultor-3D-2.0/blob/master/images/putellipsoid.png)

  mais exemplos na [Documentação](https://pablosanttana.github.io/Projeto-Escultor-3D-2.0/html/annotated.html)

