#include <iostream>
#include <math.h>
using namespace std;

struct racional{
int num;
int den;
};
void sumar(racional *pa, racional *pb, racional *pc);
void restar(racional *pa, racional *pb, racional *pc);
void multiplicar(racional *pa, racional *pb, racional *pc);
void division(racional *pa, racional *pb, racional *pc);
void datos(racional *pnum);
void imprimir(racional *pnum);
int main(){
  int opc;
  racional *pa=new racional;
  racional *pb=new racional;
  racional *pc=new racional;
  datos(pa);
  datos(pb);
  cout<<"\n Que operacion quieres hacer?\n 1. Suma \n 2. Resta \n 3. Multiplicacion \n 4. Division";
  cin>>opc;
  if(opc==1){
    sumar(pa,pb,pc);
    imprimir(pc);
  }
  else if(opc==2){
    restar(pa,pb,pc);
    imprimir(pc);
  }
 else if(opc==3){
   multiplicar(pa,pb,pc);
   imprimir(pc);
  }
  
   else if(opc==4){
     division(pa,pb,pc);
  imprimir(pc);
     }
  }

void datos(racional *pnum){
  cout<<"ingresa el numerador: ";
  cin>>pnum->num;
  cout<<"ingresa el denominador";
  cin>>pnum->den;
}
void sumar(racional *pa, racional *pb, racional *pc){
  pc->num= (pa->num * pb->den)+(pa->den*pb->num);
  pc->den= pa->den*pb->den;
}
void restar(racional *pa, racional *pb, racional *pc){
 pc->num= (pa->num * pb->den)-(pa->den*pb->num);
  pc->den= pa->den*pb->den;
}
void multiplicar(racional *pa, racional *pb, racional *pc){
  pc->num= pa->num * pb->num;
  pc->den= pa->den*pb->den;
}
void division(racional *pa, racional *pb, racional *pc){
  pc->num= pa->num * pb->den;
  pc->den= pa->den * pb->num;
}
void imprimir(racional *pnum){
  cout<<"\n El resultado es: "<<pnum->num<<"/"<<pnum->den<<endl;
}