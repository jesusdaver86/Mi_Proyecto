/***************������������������������������������������������������������ͻ****************\
*   �������������������                                                                       * 
    ۰���������۰������                                                                       *
    ۰��������۰�������                                                                       *
    ۰�������۰��������                                                                       *
    ۰�������۰��������                                                                       *
    �۰������۰�������� UNIVERSIDAD                                                           *
    ��۰�����۰��������                                                                       *
    �������������������                                                                       *
    ��۰��������                                                                              *
    �۰��������    ALONSO DE OJEDA                                                            *
    ۰��������                                                                                *
    ۰��������                                                                                *
    �۰�������                                                                                *
    ��۰������                                                                                *
    ����������  ������������������������������������������������������������ͻ                *
*               �SISTEMA AUTOMATIZADO DE REGISTRO PARA LA CONTRATACI�N DEL   �                *
*               �                PERSONAL DOCENTE DE UNIOJEDA                �                *
*               �                                                            �                *
\***************�       Desarrollado por Jesus D. Rivero C.                  �****************/
              /*�                     +58 0416-1657707                       �
                ������������������������������������������������������������ͼ*/



#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ESC 0x1b     //DEFINE LA TECLA ESC//
typedef struct registro persona;
void menu();
void almacenar();
void modificar();
void busqueda(char id_buscar[]);

struct registro
{
char nombre [30], id [30],cedula [30], sexo[30], stadocivil[30], telefono [30], comt [30], dir[30];
char materia [3][50] , materia_2 [50], materia_3 [50] ,materia_4 [50], materia_5 [50];
char materia_6 [50], materia_7 [50], materia_8 [50], materia_9 [50];

};
int acu;
char buscar[20];
FILE *x;
persona tri;
	int op_1, op_2, op_3, op_4, op_5;
struct claves{
char login[20];
char password[20];
};
typedef struct claves cl;

FILE *arch;

char op2, op3, op4, op5, op6, op7, op8, op9, opa, opb, desici;//ing1
int opmaster, oping, opadmi, opeduc;//opcion raiz
int opmas_2, opmas_3, opmas_4, opmas_5, opmas_6, opmas_8, opmas_9, opma, opmb;//ing2
int opcion, op, tope, temp;
int opma2, opma3, opma4, opma5, opma6, opma8, opma9, opm_a, opf;//admi1
int opm_a2, opm_a3, opm_a4, opm_a5, opm_a6, opm_a8, opm_a9, opmat, op_f;//admi2
int opmas2,opmas3,opmas4,opmas5,opmas6,opmas8,opmas9, opbf, opmas;//admi3
int opc, opver, sw, d, contmat;
cl clave;
/**********************************FUNCI�N PRINCIPAL*****************************************/
void main(){

        char log[20], pas[20];
		int cont;
        bool sw;
        char buscar [20];
        arch=fopen("c:\\oculto\\claves.dat", "rb");
	if (arch == NULL)
	{       printf(" �������������������\n");
            printf(" ۰���������۰������\n");
            printf(" ۰��������۰�������\n");
            printf(" ۰�������۰��������\n");
            printf(" �۰������۰�������� UNIVERSIDAD\n");
            printf(" ��۰�����۰��������\n");
            printf(" �������������������\n");
            printf(" ��۰��������\n");
            printf(" �۰��������     ALONSO DE OJEDA\n");
            printf(" ۰��������\n");
            printf(" ۰��������\n");
            printf(" �۰�������\n");
            printf(" ��۰������\n");
            printf(" ����������                  A�o 2006  \n");
            printf("        ɻ������������������������������������������������������ͻɻ\n");
		    printf("        �μ                                                      �μ\n");
            printf("        ɼ                                                        Ȼ\n");
            printf("        �         Bienvenido a nuestro sistema de acceso           �\n");
		    printf("        � A continuacion sera creada su cuenta de administrador    �\n");
            printf("        Ȼ                                                        ɼ\n");
            printf("        �λ                                                      �λ\n");
            printf("        ȼ������������������������������������������������������ͼȼ\n");
		arch= fopen("c:\\oculto\\claves.dat", "ab");
		printf("           Indique login administrador= ");
		scanf("%s",&clave.login);
		printf("           Indique password de administrador= ");
		fflush(stdin);
		for (cont=0;cont<=7;cont++)
				
			{
				if (cont<7)
				
				{
					
					clave.password[cont]=getch();
					
					printf("*");
				
				}
				
				else
					
					clave.password[cont]= NULL;
		}
		fwrite(&clave, sizeof(cl), 1, arch);
		fclose(arch);
	}
	
	else{
		do{	
		fclose(arch);
		arch=fopen("c:\\oculto\\claves.dat", "rb");
		
		system ("cls");
		fflush(stdin);
		    printf(" �������������������\n");
            printf(" ۰���������۰������\n");
            printf(" ۰��������۰�������\n");
            printf(" ۰�������۰��������\n");
            printf(" �۰������۰�������� UNIVERSIDAD\n");
            printf(" ��۰�����۰��������\n");
            printf(" �������������������\n");
            printf(" ��۰��������\n");
            printf(" �۰��������     ALONSO DE OJEDA\n");
            printf(" ۰��������\n");
            printf(" ۰��������\n");
            printf(" �۰�������\n");
            printf(" ��۰������\n");
            printf(" ����������                  A�o 2006\n\n");
		printf("   Login: ");
		
		scanf("%s", &log);
		printf("   Password: ");
		fflush(stdin);
		for (cont=0;cont<=7;cont++)
				
			{
				if (cont<7)
				
				{
					
					pas[cont]=getch();
					
					printf("*");
				
				}
				
				else
					
					pas[cont]= NULL;
			
			}
		
		
			
			

			
			sw=false;
			while (!feof(arch))
			{
				fread(&clave, sizeof(cl), 1, arch);
				if (feof(arch))
					break;
				if ((strcmp(log, clave.login)== 0) && (strcmp(pas, clave.password)==0))
				{
					sw=true;
 ////////////////////////////////////////CORRECTA=ABIERTO//////////////////////////////////
					do{
						menu();
						switch(opcion)
						{
						
						case 1:
							
							almacenar();
							
							break;
						
						case 2:
							
			printf("        ɻ������������������������������������������������������ͻɻ\n");
		    printf("        �μ                                                      �μ\n");
            printf("        ɼ                                                        Ȼ\n");
            printf("        �        INSERTE EL ID DEL DOCENTE QUE QUIERE BUSCAR       �\n");
            printf("        Ȼ                                                        ɼ\n");
            printf("        �λ                                                      �λ\n");
            printf("        ȼ������������������������������������������������������ͼȼid:");
							scanf("%s",&buscar);
							busqueda(buscar);
							break;
						
						case 3:
							x=fopen("c:\\proyecto\\registro.dat","rb");

					if(x==NULL)

					{

						printf("ɻ����������������������������������������������ͻɻ\n");
						printf("�μ                                              �μ\n");
                        printf("ɼ                                                Ȼ\n");
						printf("�Archivo vacio, Ingrese a la Opcion Almacenar Datos�\n");
						printf("�          Presione Enter Para Continuar           �\n");
						printf("Ȼ                                                ɼ\n");
                        printf("�λ                                              �λ\n");
						printf("ȼ����������������������������������������������ͼȼ\n");
						getch();

						break;

					}
					fclose(x);




							modificar();
							
							break;
						
						case 4:
							
							break;
						
						
						default:
							system("cls");
							printf("OPCION NO VALIDA INTENTE DE NUEVO");
					
					}//FIN DEL SWITCH
					printf ("\n\nPARA SALIR DEL PROGRAMA PRESIONE ESC...\nPRESIONE CUALQUIER TECLA PARA CONTINUAR...");
				}while((getch()!=ESC) ||(opcion !=4));   //si presionas ESC se termina el BUCLE

                               
				
			

					//////////////////////////////////////////////////////////////////
				}////If principal				
			}
			fclose(arch);
	
	}while (sw==false);

	}
}/////////fin principal

void menu()
{ 
  
	system ("cls");
	printf("       ���������������������������������������������������������ͻ\n");
	printf("       �SISTEMA AUTOMATIZADO DE REGISTRO PARA LA CONTRATACION DEL�\n");
	printf("       �               PERSONAL DOCENTE DE UNIOJEDA              �\n");
	printf("       ���������������������������������������������������������ͼ\n\n");
	 cputs( "���������������������������������������������������������������������Ŀ\n");
	printf("� EL SISTEMA ACTUAL CUENTA CON: %d REGISTROS                           �\n",x);
	printf("�����������������������������������������������������������������������\n\n");
    cputs( "���������������������������������������������������������������������ͻ\n");
	cputs( "�(" );
	cputs( "1" );
	printf(").-Almacenar datos del personal docente:                           �\n");
	cputs( "�(" );
	cputs( "2" );
	printf(").-Redes <<docentes por materias>>:                                �\n");
	cputs( "�(" );
	cputs( "3" );
	printf(").-Modificar un registro:                                          �\n");
	cputs( "�(" );
	cputs( "4" );
	printf(").-Salir                                                           �\n");
	printf("���������������������������������������������������������������������ͼ\n");
	printf("Seleccione la opci�n: ");
	scanf("%i", &opcion);

} //Finaliza menu/*/*//*/**////////////**/*/*//**/**/***/*//*/**//****/////

void almacenar ()
{ //////////////inicio

	system ("cls");
	x=fopen("c:\\proyecto\\registro.dat","ab");
	fflush(stdin);
	 ////lista
	    printf("Ingrese el nombre del Docente>: ");
	    gets(tri.nombre);
	    printf("Ingrese su id>: ");
	    gets(tri.id);
	    printf("Cedula>: ");
        gets(tri.cedula);
		printf("Direccion>: ");
		gets(tri.dir);
        printf("sexo>: ");
        gets(tri.sexo);
        printf("Estado civil>:  ");
        gets(tri.stadocivil);
        printf("telefono>:  ");
	    gets(tri.telefono);
        printf("Comentario>:  ");
        gets(tri.comt);
	    printf("Ingrese la cantidad de materias (max 3)");
	    scanf("%i", &contmat);
			
					do{

						        fflush(stdin);
                                system("cls");
                                printf("Que plan de estudio quiere ingresar?\n\n");
                                printf("     �����������������������������������������ͻ\n");
								printf("     � (1). FACULTAD DE INGENIERA              �\n");
                                printf("     � (2). FACULTAD DE CIENCIAS AMINISTRATIVAS�\n"); 
                                printf("     � (4). Salir                              �\n");
								printf("     �����������������������������������������ͼ\n\n");
								fflush(stdin);
								scanf("%i",&opmaster);
										while (contmat>0)
								{
								switch(opmaster)
									{
									case 1:
										{
                                fflush(stdin);
                                system("cls");
                                printf("     �����������������������������������������ͻ\n");
								printf("     � (1). INGENIERIA DE COMPUTACION          �\n");
                                printf("     � (2). INGENIERIA INDUSTRIAL              �\n"); 
                                printf("     �                                         �\n");
								printf("     �����������������������������������������ͼ\n\n");
                               
                                fflush(stdin);
                                scanf("%i",&oping);
                                
                                switch(oping)
                                {
                                  case 1:
									  {
										  fflush(stdin);
										  system("cls");
										  printf("\tIngrese el semestre a dar\n");
										  printf("\n1. 1er 2. 2do  3. 3er  4. 4to  5. 5to  6. 6to  7. 7mo  8. 8vo  9. 9no");
										  scanf("%i",&op_1);
										  switch(op_1){
										  case 1:
											  {
												  do{
													  fflush(stdin);
													  system("cls");
													  printf("\tIngrese la materia del 1er semestre \n");
													  printf("\n1. Calculo I \n2. Introducci�n a la ingenier�a \n3. Geometr�a \n4. Lenguaje I \n5. Formaci�n Deportiva \n5. Tec. De estudio e invest.: ");
													  scanf("%i",&op2);
													  switch(op2){
													  
													  case 1:
														  {
															  strcpy(tri.materia[contmat],"Calculo I");
															  break;
														  }
													  case 2:
														  {
															  strcpy(tri.materia[contmat],"Introducci�n a la ingenier�a");
															  break;
														  }
													  case 3:
														  {
															  strcpy(tri.materia[contmat],"Geometria");
															  break;
														  }
													  case 4:
														  {
															  strcpy(tri.materia[contmat],"Lenguaje I");
															  break;
														  }
													  case 5:
														  {
															  strcpy(tri.materia[contmat],"Formaci�n Deportiva");
															  break;
														  }
													  case 6:
														  {
															  strcpy(tri.materia[contmat],"Tec. de estudio e invest.");
															  break;
														  }
													  
													  }/////del switch
												  }while(op2=!6); 
												  break;
											  }//////del case
										  
										  
										  case 2:
											  
											  
											  {
												  do{
													  
													  fflush(stdin);
													  system("cls");
													  printf("\tIngrese la materia del 2do semestre \n");
													  printf("\n1. Calculo II \n2. Fisica I \n3. Dibujo \n4. Lenguaje II \n5. Habilidades Cognitivas \n6. Ingles I: ");
													  scanf("%i",&op3);
													  switch(op3){
													  case 1:
														  {
															  strcpy(tri.materia[contmat],"Calculo II");
															  break;
														  }
													  case 2:
														  {
															  strcpy(tri.materia[contmat],"F�sica I");
															  break;
														  }
													  case 3:
														  {
															  strcpy(tri.materia[contmat],"Dibujo");
															  break;
														  }
													  case 4:
														  {
															  strcpy(tri.materia[contmat],"Lenguaje II");
															  break;
														  }
													  case 5:
														  {
															  strcpy(tri.materia[contmat],"Habilidades Cognitivas");
															  break;
														  }
													  case 6:
														  {
															  strcpy(tri.materia[contmat],"Ingles I");
															  break;
														  }
													  }/////////////del switch
												  }while(op3=!6); 
												  break;
											  }
										  
										  case 3:
											  {
												  do{
													  fflush(stdin);
													  system("cls");
													  printf("\tIngrese la materia del 3er semestre \n");
													  printf("\n1. Calculo III \n2. Fisica II \n3. Algoritmos Estructuras y Programaci�n I \n4. Algebra Lineal \n5. Ingles II: ");
													  scanf("%i",&op4);
													  switch(op4){
													  case 1:
														  {
															  strcpy(tri.materia[contmat],"Calculo III");
															  break;
														  }
													  case 2:
			{
				strcpy(tri.materia[contmat],"Fisica II ");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Algoritmos Estructuras y Programaci�n I");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Algebra Lineal");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Ingles II");
				break;
			}
			}
				}while(op4=!5); 
			break;
			}

         case 4:
			{
				do{
					fflush(stdin);
					system("cls");
					printf("\tIngrese la materia del 4to semestre \n");
					printf("\n1. Calculo IV \n2. Laboratorio de Fisica \n3. Algoritmos Estructuras y Programaci�n II \n4. Estructuras Discretas \n5. Ingles III: ");
					scanf("%i",&op5);
					switch(op5){
		case 1:
			{
				strcpy(tri.materia[contmat],"Calculo IV");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Laboratorio de Fisica");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Algoritmos Estructuras y Programaci�n II");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Estructura Discretas");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Ingles III");
				break;
			}
					} ////del swith
			}while(op5=!5);
			break;
			}
		
		
		case 5:
			{
				do{
					fflush(stdin);
					system("cls");
					printf("\tIngrese la materia del 5to semestre \n");
					printf("\n1. M�todos Matematicos \n2. Circuitos y Redes \n3. Algoritmos Estructuras y Programaci�n III \n4. Sistemas Computa-cionales \n5. Probabilidades: ");
					scanf("%i",&op6);
					switch(op6){
		case 1:
			{
				strcpy(tri.materia[contmat],"M�todos Matematicos");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Circuitos y Redes");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Algoritmos Estructuras y Programaci�n III");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Sistemas Computa-cionales");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Probabilidades");
				break;
			}
			}/////////del switch
				}while(op6=!5); 
			break;
			}

			case 6:
			{
				do{
					fflush(stdin);
					system("cls");
					printf("\tIngrese el numero de la materia de 6to semestre \n");
					printf("\n1. M�todos Num�ricos \n2. Laboratorio de Circuitos \n3. Sistemas de Operaci�n \n4. Arquitectura del computador \n5. M�todos Estad�sticos: ");
					scanf("%i",&op8);
					switch(op8){
		case 1:
			{	
				strcpy(tri.materia[contmat],"M�todos Num�ricos");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Laboratorio de Circuitos");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Sistemas de Operaci�n");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Arquitectura del computador");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat]," M�todos Estad�sticos");
				break;
			}
				}//////del swi
			}while(op8=!5);
			break;
			}


				case 7:
			{
				do{
					fflush(stdin);
					system("cls");
					printf("\tIngrese la materia del 7mo semestre \n");
					printf("\n1. Sistema de bases de Datos I \n2. Sistema de Control \n3. Estructuras de Lenguaje y Compiladores \n4. Comunicaci�n de Datos I \n5. Investigaci�n de Operaciones: ");
					scanf("%i",&op9);
					switch(op9){
		case 1:
			{
				strcpy(tri.materia[contmat],"Sistema de bases de Datos I");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Sistema de Control");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Estructuras de Lenguaje y Compiladores");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Comunicaci�n de Datos I");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Investigaci�n de Operaciones");
				break;
			}
				}///del sw
				}while(op9=!5);
			break;
			}///case



			case 8:
			{
				do{
					fflush(stdin);
					system("cls");
					printf("\tIngrese la materia del 8vo semestre \n");
					printf("\n1. Sistema de bases de Datos II \n2. Planificaci�n y Desarrollo de Sistemas de Informaci�n I \n3. Ingenier�a Econ�mica (*) \n4. Comunicaci�n de Datos II \n5. Electiva I (*): ");
					scanf("%i",&opa);
					switch(opa){
		case 1:
			{
				strcpy(tri.materia[contmat],"Sistemas de Bases de Datos II ");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Planificaci�n y Desarrollo de Sistemas de Informaci�n I");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Ingenier�a Econ�mica (*)");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Comunicaci�n de Datos II");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Electiva I (*)");
				break;
			}
			}///del sw
				}while(opa=!5); 
			break;
			}//case
		case 9:
			{
				do{
					fflush(stdin);
					system("cls");
					printf("\tIngrese la materia del 9no semestre \n");
					printf("\n1. Proyecto de Investigaci�n (*) \n2. Planificaci�n y Desarrollo de Sistemas de Informaci�n II \n3. Admo. De Centros de Computaci�n \n4. Electiva II (*) \n5. Electiva III (*): ");
					scanf("%i",&opb);
					switch(opb){
		case 1:
			{
				strcpy(tri.materia[contmat],"Proyecto de Investigaci�n (*)");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Planificaci�n y Desarrollo de Sistemas de Informaci�n II");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Admo. De Centros de Computaci�n");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Electiva II (*)");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Electiva III (*)");
				break;
			}
			}//del sw
				}while(opb=!6); 
				break;
			}//case del 9
		

	
}

break;

}










case 2:
              {
				  fflush(stdin);
				  system("cls");
		printf("\tIngrese el semestre a dar\n");
		printf("\n1. 1er 2. 2do \n3. 3er  4. 4to \n5. 5to  6. 6to \n7. 7mo  8. 8vo \n9. 9no");
		fflush(stdin);
		scanf("%i", &op_2);
			switch(op_2)
			{
		case 1:
			{
				do{     
					fflush(stdin);
					system("cls");
					printf("\tIngrese la materia del 1er semestre \n");
					printf("\n1. Calculo I \n2. Introducci�n a la Ingenieria \n3. Geometria \n4. Lenguaje I \n4. Formacion Deportiva \n5. Tec. De estudio e invest.: ");
					 scanf("%i",&opmas_2);
					 switch(opmas_2)
					{
		case 1:
			{
				strcpy(tri.materia[contmat],"Calculo I");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Introducci�n a la ingenieria");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Geometria");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Lenguaje I");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Formacion Deportiva");
				break;
			}
		case 6:
			{
				strcpy(tri.materia[contmat],"Tec. de estudio e invest.");
				break;
			}
					}
				}while(opmas_2=!6); 
			break;
                       }
		case 2:
			{
				do{     fflush(stdin);
					system("cls");
					printf("\tIngrese el numero de la materia de 2do semestre \n");
					printf("\n1. Calculo II \n2. Fisica I \n3. Dibujo \n4. Lenguaje II \n5. Habilidades Cognitivas \n6. Ingles I: ");           
                                        scanf("%i",&opmas_3);
							switch(opmas_3){
		case 1:
			{
				strcpy(tri.materia[contmat],"Calculo II");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Fisica I");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Dibujo");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Lenguaje II");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Habilidades Cognitivas");
				break;
			}
		case 6:
			{
				strcpy(tri.materia[contmat],"Ingles I");
				break;
			}
			}
				}while(opmas_3=!6); 
			break;
                        }
		case 3:
			{
				do{     fflush(stdin);
					system("cls");
					printf("\tIngrese el numero de la materia de 3er semestre \n");
					printf("\n1. CalculoIII \n2. FisicaII \n3. Estatica \n4. Algebra Lineal \n5. Ingles II: ");
                                        scanf("%i",&opmas_4);           
										switch(opmas_4){
		case 1:
			{
				strcpy(tri.materia[contmat],"Calculo III");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Fisica II");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Estatica");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Algebra Lineal");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"InglesII");
				break;
			}
			}
				}while(opmas_4=!5); 
			break;
                        }
		case 4:
			{
				do{
					system("cls");
					printf("\tIngrese el numero de la materia de 4to semestre \n");
					printf("\n1. CalculoIV \n2. Laboratori de Fisica \n3. Mecanica de S�lidos \n4. Informatica I \n5. Ingenieria Ambiental \n5. Ingles III");
					scanf("%i",&opmas_5);
					switch(opmas_5){
		case 1:
			{
				strcpy(tri.materia[contmat],"Calculo IV");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Laboratorio de Fisica");
				break;
			}
		case 3:
                  { 
                        strcpy(tri.materia[contmat],"Mecanica de S�lidos");
                        break;
                                            }
            case 4:
		     {
				strcpy(tri.materia[contmat],"Informatica I");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Ingenieria Ambiental");
				break;
			}
		case 6:
			{
				strcpy(tri.materia[contmat],"Ingles III");
				break;
			}
				}
			}while(opmas_5=!6);
			break;
                         }
		case 5:
			{
				do{
					fflush(stdin); 
					system("cls");
					printf("\tIngrese el numero de la materia de 5to semestre \n");
					printf("\n1a. Metodos Numericos \n2b. Electrotecnia \n3c. Probabilidades \n4d. Informatica II \n5e. Teoria Econ�mica \n6. Quimica: ");
					scanf("%i",&opmas_6);
					switch(opmas_6){
		case 1:
			{
				strcpy(tri.materia[contmat],"Metodos Numericos");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Electrotecnia");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Probabilidades");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Informatica I");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Teoria Economica");
				break;
			}
		case 6:
                 {
                        strcpy(tri.materia[contmat],"Quimica");
                        break;
                         }
                         }
				}while(opmas_6=!5); 
			break;
                        }
		case 6://///////////////////////////////////////////HAY UN ERROR NO SE AUN
			{
				do{     fflush(stdin);
					system("cls");
					printf("\tIngrese el numero de la materia de 6to semestre \n");
					printf("\n1. Termofluidos \n2. Laboratorio de Electrotecnia \n3. Metodos Estadisticos \n4. Ingenieria Economica \n5. Ciencia y Manejo de los Materiales: ");
			        fflush(stdin);
					scanf("%i",opmas_8);
					switch(opmas_8){
		case 1:
			{	
				strcpy(tri.materia[contmat],"Termodinamica");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Laboratorio de Electrotecnia");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Metodos Estadisticos");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Ingenieria Economica");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Ciencias y Manejo de los Materiales");
				break;
			}
				}
			}while(opmas_8=!5);
			break;
                        }
		case 7:
			{
				do{     fflush(stdin);
					system("cls");
					printf("\tIntroduzca la materia del 7mo semestre \n");
					printf("\n1. Laboratorio de Termofluidos \n2. Matenimiento Industrial \n3. Investigaci�n de Operaciones I \n4. Contabilidad de Costos \n5. Adm�n.. de RRHH \n6. Procesos de Manufactura: ");
					scanf("%i",&opmas_9);
					switch(opmas_9){
		case 1:
			{
				strcpy(tri.materia[contmat],"Laboratorio de termofluios");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Mantenimiento Industrial");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Investigaci�n de Operaciones I");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Contabilidad de Costos");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Adm�n. de RRHH");
				break;
			}
		case 6:
			{
				strcpy(tri.materia[contmat],"Procesos de Manufactura");
				break;
			}
				}
				}while(opmas_9=!6);
			break;
                        }
		case 8:
			{
				do{     fflush(stdin);
					system("cls");
					printf("\tIngrese el numero de la materia de 8vo semestre \n");
					printf("\n1. Generacion de Potencia \n2. Control de Calidad \n3. Investigaci�n de Operaciones II \n4. Higiene Seguridad Industrial \n5. Plantas Industriales \n6. Laboratorio de proc. de Manufactura: ");
					scanf("%i",&opma);
					switch(opma){
		case 1:
			{
				strcpy(tri.materia[contmat],"Generacion de Potencia");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Control de Calidad" );
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Investigaci�n de Operaciones II");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Higiene Seguridad Industrial");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Plantas Industriales");
				break;
			}
		case 6:
			{
			strcpy(tri.materia[contmat],"Laboratorio de proc. de Manufactura");
			break;
					}
				}
			}while(opma=!6); 
			break;
           }
		case 9:
			{
				do{     fflush(stdin);
					system("cls");
					printf("\tIngrese el numero de la materia de 9no semestre \n");
					printf("\n1. Proyecto de Investigaci�n \n2. Planificaci�n y Control de la Producci�n \n3. Control y eval. de Proyectos \n4. Electiva I (*) \n5. Electiva II (*): ");
					scanf("%i",&opmb);
					switch(opmb){
		case 1:
			{
				strcpy(tri.materia[contmat],"Proyecto de Investigacion");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Planificaci�n y Control de la Producci�n");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Control y eval. de Proyectos");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Electiva I (*)");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Electiva II (*)");
				break;
			}
			}
				}while(opmb=!5);
                            break;
                        }
          
                        





                                                                     }//del oping
                                                    break;
                                                   }
}
break;
}




                                 case 2:
								  {
							    fflush(stdin);
                                system("cls");
								printf("     ���������������������������������������������������������������������ͻ\n");
								printf("     � (1). LICENCIATURA EN ADMINISTRACION DE EMPRESAS                     �\n");
                                printf("     � (2). LICENCIATURA EN ADMINISTRACION MENCION: RELACIONES INDUSTRIALES�\n"); 
                                printf("     � (3). LICENCIATURA EN ADMINISTRACION MENCION: GERENCIA Y MERCADEO    �\n");
								printf("     �                                                                     �\n");
								printf("     ���������������������������������������������������������������������ͼ\n\n");
                              
                                fflush(stdin);
                                scanf("%i",&opadmi);
                          
                                switch(opadmi)
                                {
                                  
								case 1:
                                        {        
									
		fflush(stdin);
        system("cls");
		printf("\tIngrese el semestre a dar\n");
		printf("\n1. 1er 2. 2do \n3. 3er  4. 4to \n5. 5to  6. 6to \n7. 7mo  8. 8vo \n9. 9no");
		fflush(stdin);
		scanf("%i", &op_3);
			switch(op_3)
			{
		case 1:
			{
				do{ fflush(stdin);
					system("cls");
					printf("\tIngrese la materia del 1er semestre \n");
					printf("\n1. Contabilidad I \n2. Principios administrativos I \n3. Matematica I \n4. Lenguaje I \n5. Tec. De estudio e invest  \n6. Formacion Deportiva.: ");
					scanf("%i",&opma2);
					switch(opma2)
					{
		case 1:
			{
				strcpy(tri.materia[contmat],"Contabilidad I");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Principios administrativos I");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Matematica I");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Lenguaje I");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Tec. De estudio e invest");
				break;
			}
		case 6:
			{
				strcpy(tri.materia[contmat],"Formaci�n Deportiva");
				break;
			}
					}
				}while(opma2=!6); 
			break;
                 }
		case 2:
			{
				do{fflush(stdin);
					system("cls");
					printf("\tIngrese el numero de la materia de 2do semestre \n");
					printf("\n1. Contabilidad II \n2. Principios administrativos II \n3. Matematica II \n4. Lenguaje II \n5. Habilidades Cognitivas \n6. Ingles I: ");
					scanf("%i",&opma3);
					switch(opma3){
		case 1:
			{
				strcpy(tri.materia[contmat],"Contabilidad II");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Principios administrativos II");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Matematica II");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Lenguaje II");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Habilidades Cognitivas");
				break;
			}
		case 6:
			{
				strcpy(tri.materia[contmat],"Ingles I");
				break;
			}
			}
				}while(opma3=!6); 
			break;
                       }
		case 3:
			{
				do{fflush(stdin);
					system("cls");
					printf("\tIngrese el numero de la materia de 3er semestre \n");
					printf("\n1. Contabilidad III \n2. Legislaci�n Mercantil \n3. Matematica Financiera \n4. Estadistica I \n5. Historia y Geografia Economica \n6. Ingles II ");
					scanf("%i",&opma4);
					switch(opma4){
		case 1:
			{
				strcpy(tri.materia[contmat],"Contabilidad III");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Legislacion Mercantil");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Matematica Finaciera");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Estadistica I");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Historia y Geografia Economica");
				break;
			}
                             case 6:
                                          {
                                                         strcpy(tri.materia[contmat],"Ingles II");
				break;
			}
                            
			}
				}while(opma4=!6); 
			break;
                        }
		case 4:
			{
				do{fflush(stdin);
					system("cls");
					printf("\tIngrese el numero de la materia de 4to semestre \n");
					printf("\n1. Analisis de Estados Financieros \n2. Legislaci�n Laboral \n3. Informatica I \n4. Estadistica II \n5. Ingles III: ");
					scanf("%i",&opma5);
					switch(opma5){
		case 1:
			{
				strcpy(tri.materia[contmat],"Analisis de Estados Financieros");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Legislaci�n Laboral");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Informatica I");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Estadistica II");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Ingles III");
				break;
			}
				}
			}while(opma5=!5);
			break;
                        }
		case 5:
			{
				do{fflush(stdin);
					system("cls");
					printf("\tIngrese el numero de la materia de 5to semestre \n");
					printf("\n1. Contabilidad de Costos \n2. Gerencia Ambiental \n3. Informatica II \n4. Investigaci�n de Operaciones \n5. Comport. Organizacional \n6. Psicolog�a del Trabajo: ");
					scanf("%i",&opma6);
					switch(opma6){
		case 1:
			{
				strcpy(tri.materia[contmat],"Contabilidad de Costos");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Gerencia Ambiental");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Informatica II");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Investigaci�n de Operaciones");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Comport. Organizacional");
				break;
			}
		case 6:
                                          {
                                                         strcpy(tri.materia[contmat],"Psicologia del Trabajo");
                                                         break;
                                           }
                                           }
				}while(opma6=!5); 
			break;
                         }
		case 6:
			{
				do{fflush(stdin);
					system("cls");
					printf("\tIngrese la materia del 6to semestre \n");
					printf("\n1. Analisis de costos \n2. Administraci�n Publica \n3. Sistemas de Informacion Gerencial \n4. Teoria Economica I \n5. Admon de RRHH \n6. Mercadotecnia: ");
			        scanf("%i",&opma8);
					switch(opma8){
		case 1:
			{	
				strcpy(tri.materia[contmat],"Analisis de costos");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Administraci�n Publica");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Sistemas de Informacion Gerencial");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Teoria Economica I");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Admon de RRHH");
				break;
			}
                            case 6:
                                           {
                                                        strcpy(tri.materia[contmat],"Mercadotecnia");
                                                        break;
                                            }
				}
			}while(opma8=!5);
			break;
                       }
		case 7:
			{
				do{fflush(stdin);
					system("cls");
					printf("\tIngrese el numero de la materia de 7mo semestre \n");
					printf("\n1. Adm�n. Financiera \n2. Sistema Impositivo Venezolano \n3. Control y Evaluacion de Procesos \n4. Teoria Econ�mica II \n5. Mercadeo Nacional \n6. Investigaci�n de Mercadeo: ");
					scanf("%i",&opma9);
					switch(opma9){
		case 1:
			{
				strcpy(tri.materia[contmat],"Adm�n Financiera");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Sistema Impositivo Venezolano");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Control y Evaluaciones de procesos");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Teoria Econ�mica II");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Mercadeo Nacional");
				break;
			}
            case 6:
                  {
                        strcpy(tri.materia[contmat],"Investigacion de Mercadeo");
                        break;
                         }
				}
				}while(opma9=!5);
			break;
                         }
		case 8:
			{
				do{fflush(stdin);
					system("cls");
					printf("\tIngrese el numero de la materia de 8vo semestre \n");
					printf("\n1. Planificaci�n y Presupuesto \n2. Instituciones Financieras \n3. Planificaci�n y Control de la Producci�n \n4. Aplicaci�n de normas ISO \n5. Mercadeo Internacional \n6. Electiva I: ");
					scanf("%i",&opm_a);
					switch(opm_a){
		case 1:
			{
				strcpy(tri.materia[contmat],"Planificaci�n y Presupuestos");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Instituciones Financieras");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Planificaci�n y Control de la Producion");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Alicacion de normas ISO");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Mercadeo Internacional");
				break;
			}
			
		case 6:
			{
				strcpy(tri.materia[contmat],"Electiva I");
				break;
                                           }

                                          }
				}while(opm_a=!5); 
			break;
                        }
		case 9:
			{
				do{fflush(stdin);
					system("cls");
					printf("\tIngrese el numero de la materia de 9no semestre \n");
					printf("\n1. Proyecto de Investigacion \n2. Gerencia Estrategica \n3. Auditoria Administrativa \n4. Lab. De Casos Simulados \n5. Formaci�n Empresarial \n6. Electiva II: ");
					scanf("%i",&opf);
					switch(opf){
            case 1:
                  {
                        strcpy(tri.materia[contmat],"Proyecto de Invesigacion");
                        break;
                   }
		case 2:
			{
				strcpy(tri.materia[contmat],"Gerencia Estrategica");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Auditoria Administrativa");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Lab. De Casos Simulados ");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Formaci�n Empresarial");
				break;
			}
		case 6:
			{
				strcpy(tri.materia[contmat],"Electiva II");
				break;
			}
			}//swit
				}while(opf=!7);
                        break;
                        }//case
			}
	break;		
}













                case 2:
					{
						
						fflush(stdin);				
						system("cls");
						printf("\tIngrese el semestre a dar\n");
						printf("\n1. 1er 2. 2do \n3. 3er  4. 4to \n5. 5to  6. 6to \n7. 7mo  8. 8vo \n9. 9no");
						scanf("%i", &op_4);
						fflush(stdin);
						switch(op_4)
						{
						case 1:
							{
								do{ 
									fflush(stdin);
									system("cls");
									printf("\tIngrese la materia del 1er semestre \n");
									printf("\n1. Contabilidad I \n2. Principios administrativos I \n3. Matematica I \n4. Lenguaje I \n5. Tec. De estudio e invest  \n6. Formacion Deportiva.: ");
									scanf("%i",&opm_a2);
									switch(opm_a2)
									{
									case 1:
										{
											strcpy(tri.materia[contmat],"Contabilidad I");
											break;
										}
									case 2:
										{
											strcpy(tri.materia[contmat],"Principios administrativos I");
											break;
										}
									case 3:
										{
											strcpy(tri.materia[contmat],"Matematica I");
											break;
										}
									case 4:
										{
											strcpy(tri.materia[contmat],"Lenguaje I");
											break;
										}
									case 5:
										{
											strcpy(tri.materia[contmat],"Tec. De estudio e invest");
											break;
										}
									case 6:
										{
											strcpy(tri.materia[contmat],"Formaci�n Deportiva");
											break;
										}
									}
								}while(opm_a2=!6); 
								break;
							}
						case 2:
							{
								do{
									fflush(stdin);
									system("cls");
									printf("\tIngrese el numero de la materia de 2do semestre \n");
									printf("\n1. Contabilidad II \n2. Principios administrativos II \n3. Matematica II \n4. Lenguaje II \n5. Habilidades Cognitivas \n6. Ingles I: ");
									scanf("%i",&opma3);
									switch(opma3){
									case 1:
										{
											strcpy(tri.materia[contmat],"Contabilidad II");
											break;
										}
									case 2:
										{
											strcpy(tri.materia[contmat],"Principios administrativos II");
											break;
										}
									case 3:
										{
											strcpy(tri.materia[contmat],"Matematica II");
											break;
										}
									case 4:
										{
											strcpy(tri.materia[contmat],"Lenguaje II");
											break;
										}
									case 5:
										{
											strcpy(tri.materia[contmat],"Habilidades Cognitivas");
											break;
										}
									case 6:
										{
											strcpy(tri.materia[contmat],"Ingles I");
											break;
										}
									}
								}while(opm_a3=!6); 
								break;
							}
						case 3:
							{
								do{
									fflush(stdin);
									system("cls");
									printf("\tIngrese el numero de la materia de 3er semestre \n");
									printf("\n1. Contabilidad III \n2. Legislaci�n Mercantil \n3. Matematica Financiera \n4. Estadistica I \n5. Historia y Geografia Economica \n6. Ingles II ");
									scanf("%i",&opm_a4);
									switch(opm_a4){
									case 1:
										{
											strcpy(tri.materia[contmat],"Contabilidad III");
											break;
										}
									case 2:
										{
											strcpy(tri.materia[contmat],"Legislacion Mercantil");
											break;
										}
									case 3:
										{
											strcpy(tri.materia[contmat],"Matematica Finaciera");
											break;
										}
									case 4:
										{
											strcpy(tri.materia[contmat],"Estadistica I");
											break;
										}
									case 5:
										{
											strcpy(tri.materia[contmat],"Historia y Geografia Economica");
											break;
										}
									case 6:
										{
											strcpy(tri.materia[contmat],"Ingles II");
											break;
										}
									}
								}while(opm_a4=!6); 
								break;
							}
						case 4:
							{
								do{
									fflush(stdin);
									system("cls");
									printf("\tIngrese el numero de la materia de 4to semestre \n");
									printf("\n1. Analisis de Estados Financieros \n2. Legislaci�n Laboral \n3. Informatica I \n4. Estadistica II \n5. Ingles III: ");
									scanf("%i",&opm_a5);
									switch(opm_a5){
									case 1:
										{
											strcpy(tri.materia[contmat],"Analisis de Estados Financieros");
											break;
										}
									case 2:
										{
											strcpy(tri.materia[contmat],"Legislaci�n Laboral");
											break;
										}
									case 3:
										{
											strcpy(tri.materia[contmat],"Informatica I");
											break;
										}
									case 4:
										{
											strcpy(tri.materia[contmat],"Estadistica II");
											break;
										}
									case 5:
										{
											strcpy(tri.materia[contmat],"Ingles III");
											break;
										}
									}
								}while(opm_a5=!5);
								break;
							}
						case 5:
							{
								do{
									fflush(stdin);
									system("cls");
									printf("\tIngrese el numero de la materia de 5to semestre \n");
									printf("\n1. Contabilidad de Costos \n2. Gerencia Ambiental \n3. Informatica II \n4. Investigaci�n de Operaciones \n5. Comport. Organizacional \n6. Psicolog�a del Trabajo: ");
									scanf("%i",&opm_a6);
									switch(opm_a6){
									case 1:
										{
											strcpy(tri.materia[contmat],"Contabilidad de Costos");
											break;
										}
									case 2:
										{
											strcpy(tri.materia[contmat],"Gerencia Ambiental");
											break;
										}
									case 3:
										{
											strcpy(tri.materia[contmat],"Informatica II");
											break;
										}
									case 4:
										{
											strcpy(tri.materia[contmat],"Investigaci�n de Operaciones");
											break;
										}
									case 5:
										{
											strcpy(tri.materia[contmat],"Comport. Organizacional");
											break;
										}
									case 6:
										{
											strcpy(tri.materia[contmat],"Psicologia del Trabajo");
											break;
										}
									}
								}while(opma6=!5); 
								break;
							}
						case 6:
							{
								do{
									fflush(stdin);
									system("cls");
									printf("\tIngrese el numero de la materia de 6to semestre \n");
									printf("\n1. Analisis de costos \n2. Administraci�n Publica \n3. Sistemas de Informacion Gerencial \n4. Teoria Economica I \n5. Teoria de las Relaciones Industriales \n6. Psicologia Industrial: ");
									scanf("%i",&opm_a8);
									switch(opm_a8){
									case 1:
										{	
											strcpy(tri.materia[contmat],"Analisis de costos");
											break;
										}
									case 2:
										{
											strcpy(tri.materia[contmat],"Administraci�n Publica");
											break;
										}
									case 3:
										{
											strcpy(tri.materia[contmat],"Sistemas de Informacion Gerencial");
											break;
										}
									case 4:
										{
											strcpy(tri.materia[contmat],"Teoria Economica I");
											break;
										}
									case 5:
										{
											strcpy(tri.materia[contmat],"Teoria de las Relaciones Industriales");
											break;
										}
            case 6:
                  {
                        strcpy(tri.materia[contmat],"Psicoligia Industrial");
                        break;
                  }
				}
			}while(opma8=!5);
			break;
                       }
		case 7:
			{
				do{fflush(stdin);
					system("cls");
					printf("\tIngrese el numero de la materia de 7mo semestre \n");
					printf("\n1. Adm�n. Financiera \n2. Sistema Impositivo Venezolano \n3. Control y Evaluacion de Procesos \n4. Teoria Econ�mica II \n5. Analisis y Evaluaci�n de Puestos \n6. Psicometria: ");
					scanf("%i",&opm_a9);
					switch(opm_a9){
		case 1:
			{
				strcpy(tri.materia[contmat],"Adm�n Financiera");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Sistema Impositivo Venezolano");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Control y Evaluaciones de procesos");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Teoria Econ�mica II");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Analisis y Evaluacion de Puestos");
				break;
			}
            case 6:
                  {
                        strcpy(tri.materia[contmat],"Psicometria");
                        break;
                        }
				}
				}while(opm_a9=!5);
			break;
                         }
		case 8:
			{
				do{fflush(stdin);
					system("cls");
					printf("\tIngrese el numero de la materia de 8vo semestre \n");
					printf("\n1. Planificaci�n y Presupuesto \n2. Metodos y Tecnicas de Control \n3. Electiva I \n4. Reclutamiento y Selecci�n \n5. Nominas y Salarios \n6. Evaluacion de Personal: ");
					scanf("%i",&opmat);
					switch(opmat){
		case 1:
			{
				strcpy(tri.materia[contmat],"Planificaci�n y Presupuestos");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Metodos y Tecnicas de Control");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Electiva I");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Reclutamiento y Selecci�n");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Nominas y Salarios");
				break;
			}
			
		case 6:
			{
				strcpy(tri.materia[contmat],"Evaluacion de Personal");
				break;
                                           }

                                          }
				}while(opmat=!6); 
			break;
                        }
		case 9:
			{
				do{fflush(stdin);
					system("cls");
					printf("\tIngrese el numero de la materia de 9no semestre \n");
					printf("\n1. Proyecto de Investigacion \n2. Higiene y Seguridad Industrial \n3. Electiva II \n4. Lab. De Casos Simulados \n5. Compensaci�n y Beneficios \n6. Capacitac�n y Desarrollo: ");
					scanf("%i",&op_f);
					switch(op_f){
            case 1:
                  {
                        strcpy(tri.materia[contmat],"Proyecto de Invesigacion");
                        break;
                  }
		case 2:
			{
				strcpy(tri.materia[contmat],"Higiene y Seguridad Industrial");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Electiva II");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Lab. De Casos Simulados ");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Compensaci�n y Beneficios");
				break;
			}
		case 6:
			{
				strcpy(tri.materia[contmat],"Capacitac�n y Desarrollo");
				break;
			}
			}//swit
				}while(op_f=!7);
                        break;
                        }//case 
			}
break;			
}












			case 3:
				{
               fflush(stdin);
			   system("cls");
			   printf("\tIngrese el semestre a dar\n");
			   printf("\n1. 1er 2. 2do \n3. 3er  4. 4to \n5. 5to  6. 6to \n7. 7mo  8. 8vo \n9. 9no");
			   fflush(stdin);
			   scanf("%i", &op_5);
			   switch(op_5)
			   {
		case 1:
			{
				do{ fflush(stdin);
					system("cls");
					printf("\tIngrese la materia del 1er semestre \n");
					printf("\n1. Contabilidad I \n2. Principios administrativos I \n3. Matematica I \n4. Lenguaje I \n5. Tec. De estudio e invest  \n6. Formacion Deportiva.: ");
					scanf("%i",&opmas2);
					switch(opmas2)
					{
		case 1:
			{
				strcpy(tri.materia[contmat],"Contabilidad I");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Principios administrativos I");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Matematica I");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Lenguaje I");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Tec. De estudio e invest");
				break;
			}
		case 6:
			{
				strcpy(tri.materia[contmat],"Formaci�n Deportiva");
				break;
			}
					}
				}while(opmas2=!6); 
			break;
                 }
		case 2:
			{
				do{fflush(stdin);
					system("cls");
					printf("\tIngrese el numero de la materia de 2do semestre \n");
					printf("\n1. Contabilidad II \n2. Principios administrativos II \n3. Matematica II \n4. Lenguaje II \n5. Habilidades Cognitivas \n6. InglesI: ");
					scanf("%i",&opmas3);
					switch(opmas3){
		case 1:
			{
				strcpy(tri.materia[contmat],"Contabilidad II");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Principios administrativos II");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Matematica II");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Lenguaje II");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Habilidades Cognitivas");
				break;
			}
		case 6:
			{
				strcpy(tri.materia[contmat],"InglesI");
				break;
			}
			}
				}while(opmas3=!6); 
			break;
                       }
		case 3:
			{
				do{fflush(stdin);
					system("cls");
					printf("\tIngrese el numero de la materia de 3er semestre \n");
					printf("\n1. Contabilidad III \n2. Legislaci�n Laboral \n3. Matematica Financiera \n4. Estadistica I \n5. Historia y Geografia Economica \n6. Ingles II ");
					scanf("%i",&opmas4);
					switch(opmas4){
		case 1:
			{
				strcpy(tri.materia[contmat],"Contabilidad III");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Legislaci�n Laboral");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Matematica Finaciera");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Estadistica I");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Historia y Geografia Economica");
				break;
			}
            case 6:
                        {
                        strcpy(tri.materia[contmat],"Ingles II");
				break;
			}
                            
			}
				}while(opmas4=!6); 
			break;
                        }
		case 4:
			{
				do{fflush(stdin);
					system("cls");
					printf("\tIngrese el numero de la materia de 4to semestre \n");
					printf("\n1. Analisis de Estados Financieros \n2. Legislativo Laboral \n3. Informatica I \n4. Estadistica II \n5. Ingles III: ");
					scanf("%i",&opmas5);
					switch(opmas5){
		case 1:
			{
				strcpy(tri.materia[contmat],"Analisis de Estados Financieros");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Legislativo Laboral");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Informatica I");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Estadistica II");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Ingles III");
				break;
			}
				}
			}while(opmas5=!5);
			break;
                        }
		case 5:
			{
				do{fflush(stdin);
					system("cls");
					printf("\tIngrese el numero de la materia de 5to semestre \n");
					printf("\n1. Contabilidad de Costos \n2. Gerencia Laboral \n3. Informatica II \n4. Investigaci�n de Operaciones \n5. Comport. Organizacional \n6. Psicolog�a del Trabajo: ");
					scanf("%i",&opmas6);
					switch(opmas6){
		case 1:
			{
				strcpy(tri.materia[contmat],"Contabilidad de Costos");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Gerencia Laboral");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Informatica II");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Investigaci�n de Operaciones");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Comport. Organizacional");
				break;
			}
		case 6:
                  {
                        strcpy(tri.materia[contmat],"Psicologia del Trabajo");
                        break;
                       }
                       }
				}while(opmas6=!6); 
			break;
                         }
		case 6:
			{
				do{fflush(stdin);
					system("cls");
					printf("\tIngrese el numero de la materia de 6to semestre \n");
					printf("\n2a. Analisis de costos \n2b. Administraci�n Publica \n2c. Sistemas de Informacion Gerencial \n2d. Teoria Economica I \n5e. Admon de RRHH \n6. Mercadotecnia: ");
			        scanf("%i",&opmas8);
					switch(opmas8){
		case 1:
			{	
				strcpy(tri.materia[contmat],"Analisis de costos");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Administraci�n Publica");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Sistemas de Informacion Gerencial");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Teoria Economica I");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Admon de RRHH");
				break;
			}
            case 6:
                          {
                        strcpy(tri.materia[contmat],"Mercadotecnia");
                        break;
                          }
				}
			}while(opmas8=!6);
			break;
                       }
		case 7:
			{
				do{fflush(stdin);
					system("cls");
					printf("\tIngrese el numero de la materia de 7mo semestre \n");
					printf("\n1. Adm�n. Financiera \n2. Sistema Impositivo Venezolano \n3. Control y Evaluacion de Procesos \n4. Teoria Econ�mica II \n5. Mercadeo Internacional \n6. Investigaci�n de mercadeo: ");
					scanf("%i",&opmas9);
					switch(opmas9){
		case 1:
			{
				strcpy(tri.materia[contmat],"Adm�n Financiera");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Sistema Impositivo Venezolano");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Control y Evaluaciones de procesos");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Teoria Econ�mica II");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Mercadeo Internacional");
				break;
			}
                case 6:
            {
                strcpy(tri.materia[contmat],"Investigacion de Mercadeo");
                break;
			}
					}
			 }while(opmas9=!6);
				break;
			}
		case 8:
			{
				do{fflush(stdin);
					system("cls");
					printf("\tIngrese el numero de la materia de 8vo semestre \n");
					printf("\n1. Planificaci�n y Presupuesto \n2. Instituciones Financieras \n3. Planificaci�n y Control de la Producci�n \n4. Aplicaci�n de normas ISO \n5. Gerencia Estrategica y Mercadeo \n6. Electiva I: ");
					scanf("%i",&opmas);
					switch(opmas){
		case 1:
			{
				strcpy(tri.materia[contmat],"Planificaci�n y Presupuestos");
				break;
			}
		case 2:
			{
				strcpy(tri.materia[contmat],"Instituciones Financieras");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Planificaci�n y Control de la Producion");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Alicacion de normas ISO");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Gerenecia Estrategica y Mercadeo");
				break;
			}
			
		case 6:
			{
				strcpy(tri.materia[contmat],"Electiva I");
				break;
                                           }

                                          }
				}while(opmas=!5); 
			break;
                        }
		case 9:
			{
				do{fflush(stdin);
					system("cls");
					printf("\tIngrese el numero de la materia de 9no semestre \n");
					printf("\n5a. Proyecto de Investigacion \n5b. Gerencia Estrategica \n5c. Auditoria Administrativa \n5d. Lab. De Casos Simulados \n5e. Formaci�n Empresarial \n6. Electiva II: ");
					scanf("%i",&opbf);
					switch(opbf){
                            case 1:
								{
									strcpy(tri.materia[contmat],"Proyecto de Invesigacion");
									break;
								}
		case 2:
			{
				strcpy(tri.materia[contmat],"Gerencia Estrategica");
				break;
			}
		case 3:
			{
				strcpy(tri.materia[contmat],"Auditoria Administrativa");
				break;
			}
		case 4:
			{
				strcpy(tri.materia[contmat],"Lab. De Casos Simulados ");
				break;
			}
		case 5:
			{
				strcpy(tri.materia[contmat],"Formaci�n Empresarial");
				break;
			}
		case 6:
			{
				strcpy(tri.materia[contmat],"Electiva II");
				break;
			}
			}//swit
				}while(opbf=!7);
                        break;
                        }//case 
                                        

                        }///Fin del switch op_5
			break;
		}//fin case 3
		









                        














































												}///del switch
												
												break;
										}
	
}//Fin del opmaster
contmat--;
}
           }while (opmaster !=4);
					fwrite(&tri, sizeof(persona),1,x);

				fclose(x);
				}
/////////////////////////////////////////////////////////////////////

void busqueda(char id_buscar[])
				{
	int cont;
					system ("cls");
					fflush(stdin);
					sw=0;
					system ("cls");

					x=fopen("c:\\proyecto\\registro.dat","rb");

					if(x==NULL)

					{   
						printf("ɻ����������������������������������������������ͻɻ\n");
						printf("�μ                                              �μ\n");
                        printf("ɼ                                                Ȼ\n");
						printf("�Archivo vacio, Ingrese a la Opcion Almacenar Datos�\n");
						printf("�          Presione Enter Para Continuar           �\n");
						printf("Ȼ                                                ɼ\n");
                        printf("�λ                                              �λ\n");
						printf("ȼ����������������������������������������������ͼȼ\n");
						getch();

						

					}
					else
					{

					while(!feof(x))

					{

						fread(&tri,sizeof(persona),1,x);

						if(feof(x))

						{

							break;

						}
						if(strcmp(id_buscar,tri.id)==0)
						{
sw=1;
						system ("cls");
							printf("Nombre: %s \n",tri.nombre);
							printf("Id: %s \n",tri.id);
							printf("Cedula: %s \n",tri.cedula);
							printf("Sexo: %s \n",tri.sexo);
							printf("estado civil: %s \n",tri.stadocivil);
							printf("Telefono: %s \n",tri.telefono);
							for( cont=3;cont>0;cont--)
							{
								if(tri.materia[cont] != NULL)
								printf("Materia: %s \n",tri.materia[cont]);
							}
														
							getch();
						}
									
					}
					if(sw==0)

					{

						system ("cls");

						printf("ɻ����������������������������������������������ͻɻ\n");
						printf("�μ                                              �μ\n");
                        printf("ɼ                                                Ȼ\n");
						printf("�              Persona no encontrada               �\n");
						printf("�          Presione Enter Para Continuar           �\n");
						printf("Ȼ                                                ɼ\n");
                        printf("�λ                                              �λ\n");
						printf("ȼ����������������������������������������������ͼȼ\n");

						getch();

						}
					}
				fclose(x);

					
				}
//////////////////////////////////////////////////////////////////////
			
                       void modificar()
                       {
                                               
                            
				system ("cls");
x=fopen("c:\\proyecto\\registro.dat","rb+");
					
					fflush(stdin);

					printf("Ingrese ID: ");

					gets(buscar);

					while(!feof(x))

					{
						fread(&tri,sizeof(persona),1,x);
						if(feof(x))
							break;

						

						if(strcmp(tri.id,buscar)==0)

						{

							printf("\n\nIngrese nuevo Nombre : ");

							fflush(stdin);

							gets(tri.nombre);

							printf("\nIngrese Nuevo id : ");
							gets(tri.id);
                
							printf("\nNueva cedula: ");
 							gets(tri.cedula);
        
							printf("Sexo: ");
							gets(tri.sexo);

							printf("Estado civil");                                                     
							gets(tri.stadocivil);

							printf("\nNuevo telefono: ");
							gets(tri.telefono);
                        
							d=ftell(x)- sizeof(persona);
							fseek(x,d,0);
							fwrite(&tri,sizeof(persona),1,x);
							fclose(x);
							break;

							
						
			}/////fin if
					
			}/// fin while
				
							
			fclose(x);
			
					
          
				
				
				}
		
	

