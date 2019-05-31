#include <stdio.h>
#include<string.h>

struct Pessoa{
    char nome[255];
    int idade;
    char cpf[11];
};

struct Professor{
    struct Pessoa pessoa;
    char unidade[4];
    float salario;
};

struct Aluno{
    struct Pessoa pessoa;
    int periodo;
    float cr;
};

struct Funcionario{
    struct Pessoa pessoa;
    char cargo[30];
	float salario;
};

struct Membro{
    int subtipo;
    union{
        struct Professor professor;
        struct Aluno aluno;
		struct Funcionario funcionario;
    };
};

void preenche_pessoa(struct Pessoa* p){
    printf("preencha o nome ");
    scanf("%s",p->nome);
    printf("preencha a idade ");
    scanf("%d",&p->idade);
    printf("preencha a cpf ");
    scanf("%s",p->cpf);
}

void preenche_professor(struct Professor* p){
    preenche_pessoa(&p->pessoa);
    printf("preencha a unidade ");
    scanf("%s",p->unidade);
    printf("preencha o salario ");
    scanf("%f",&p->salario);
}

void preenche_aluno(struct Aluno* a){
    preenche_pessoa(&a->pessoa);
    printf("preencha o periodo ");
    scanf("%d",&a->periodo);
    printf("preencha o cr ");
    scanf("%f",&a->cr);
}

void preenche_funcionario(struct Funcionario* f){
    preenche_pessoa(&f->pessoa);
    printf("preencha o cargo");
    scanf("%s",f->cargo);
    printf("preencha o salario");
    scanf("%f",&f->salario);
}

void preenche_membro(struct Membro* m){
    m->subtipo = 0;
    printf("professor digite 1, aluno digite 2 ou funcionario digite 3 ");
    scanf("%d",&m->subtipo);
    if(m->subtipo==1){
        preenche_professor(&m->professor);
    }
    else if(m->subtipo==2){
        preenche_aluno(&m->aluno);
    }
	else if(m->subtipo==3){
        preenche_funcionario(&m->funcionario);
    }
}

void exibe_pessoa(struct Pessoa* p){
     printf("%s,%d,%s,", p->nome, p->idade, p->cpf);
}

void exibe_professor(struct Professor* p){
    exibe_pessoa(&p->pessoa);
    printf("%s,%.2f\n", p->unidade, p->salario);
}

void exibe_aluno(struct Aluno* a){
    exibe_pessoa(&a->pessoa);
    printf("%d,%.2f\n", a->periodo, a->cr);
}

void exibe_funcionario(struct Funcionario* f){
    exibe_pessoa(&f->pessoa);
    printf("%s,%.2f\n", f->cargo, f->salario);
}

void exibe_membro(struct Membro* m){
    if(m->subtipo==1){
        exibe_professor(&m->professor);
    }else if(m->subtipo==2){
        exibe_aluno(&m->aluno);
    }
	else if(m->subtipo==3){
        exibe_funcionario(&m->funcionario);
    }
}

int main(void){
	int i;
	int n = 100;
    struct Membro m1[n];
	for(i=0;i<n;i++){
		preenche_membro(&m1[i]);
		exibe_membro(&m1[i]);
	}
    return 0;
}
