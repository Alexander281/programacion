#include<stdio.h>
class Impares{
	int n;
	public:
		void ingrese(int n1){
			n=n1;
		}
		int operacion(){
			int i;
			i=1;
			while(i<=n*2){
				
			    printf("%d\n",i);
				i=i+2;
			    
			}
		
			return i;
		}
		void mostrar(){
		    printf("los %d primeros numeros impares son:\n",n);
			printf("",operacion());
		}
};
int main(){
	Impares i1;
	i1.ingrese(10);
	i1.mostrar();
}
