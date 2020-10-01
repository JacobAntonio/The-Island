#include <iostream>
#include <string>
using namespace std;

string option1, option2, option3;
int choice;

void Choice1();
void Choice2();
void Choice3();
void Choice4();
void Choice5();
void Choice6();
void Choice7();
void Choice8();
void Choice9();
void Choice10();
void Choice11();
void Choice12();
void Choice13();
void Choice14();
void Choice15();
void Choice16();

int main(){
	cout<<"Tu barco naugrafo en una violenta tormenta.\n";
	cout<<"El mar te arrastra hasta la playa de una isla desierta en algun lugar del pacifico.\n";
	Choice1();
	return 0;
}

void Choice1(){
	option1 = "Explorar la isla";
	option2 = "Construir una torre para colocar señales";
	cout<<"Sale el sol y el cielo se enclarece, te levantas y observas la playa.\n";
	cout<<"¿Que decides hacer?\n\n";
	cout<<"(1) "<<option1<<".\n"<<"(2) "<<option2<<".\n";
	cin>>choice;
	cin.ignore();
	switch(choice){
		case 1: Choice3(); break;
		case 2: Choice2(); break;
		default: cout<<"Opcion no valida\n"; Choice1(); break;
	}
}

void Choice2(){
	option1="Investgar que causo el ruido";
	option2="Ir a la playa a conseguir mas madera";
	cout<<"Trepas al punto mas alto de la isla.\n";
	cout<<"Estas construyendo la torre cuando escuchas un ruido en la maleza.\n";
	cout<<"¿Que haces?\n";
	cout<<"(1) "<<option1<<".\n"<<"(2) "<<option2<<".\n";
	cin>>choice;
	cin.ignore();
	switch(choice){
		case 1: Choice4(); break;
		case 2: Choice5(); break;
		default: cout<<"Opcion no valida\n"; Choice2(); break;
	}
}

void Choice3(){
	option1="Ir a recoger algunas joyas";
	option2="Regresar a la playa de donde llegastes";
	option3="Seguir explorando la isla";
	cout<<"Caminando a lo largo de la playa, descubres unas cuevas donde brillan joyas incrustadas a las rocas del techo.\n";
	cout<<"¿Que decides hacer?\n";
	cout<<"(1) "<<option1<<".\n"<<"(2) "<<option2<<".\n"<<"(3) "<<option3<<".\n";
	cin>>choice;
	cin.ignore();
	switch(choice){
		case 1: Choice7(); break;
		case 2: Choice6(); break;
		case 3: Choice8(); break;
		default: cout<<"Opcion no valdia\n"; Choice3(); break;
	}	
}

void Choice4(){
	option1="Seguir por el camino que descubristes";
	option2="Regresar a la playa";
	cout<<"En lo profundo de la maleza persigues a un animal parecido a un oso.\n";
	cout<<"Pero lo pierdes de vista al tropezarte con un camino en lo profundo de la selva.\n";
	cout<<"El camino es plano y muy liso, como si hubriera sido tallado.\n";
	cout<<"Puede que halla gente en la isla despues de todo.\n";
	cout<<"¿Cual es tu decision?\n";
	cout<<"(1) "<<option1<<".\n"<<"(2) "<<option2<<".\n";
	cin>>choice;
	cin.ignore();
	switch(choice){
		case 1: Choice12(); break;
		case 2: Choice13(); break;
		default: cout<<"Opcion no valida\n"; Choice4(); break;
	}
}

void Choice5(){
	option1="Seguir el sendero adentrandose en la jungla";
	option2="Tratar de llegar a la playa por como sea posible;";
	cout<<"Cuando bajas de la montaña, notas que tomastes el camino equivocado y te encuentras perdido en la maleza.\n";
	cout<<"Despues de caminar perdido por un rato, encuentras un sendero que no recuerdas haber visto antes.\n";
	cout<<"¿Que decides hacer?\n";
	cout<<"(1) "<<option1<<".\n"<<"(2) "<<option2<<".\n";
	cin>>choice;
	cin.ignore();
	switch(choice){
		case 1: Choice12(); break;
		case 2: Choice14(); break;
		default: cout<<"Opcion no valida\n"; Choice5(); break;
	}
}

void Choice6(){
	cout<<"Por algun motivo tu breve visita a la cueva te ha confundido y te encuentras alejandote del lugar de donde llegastes.\n";
	Choice8();
}

void Choice8(){
	option1="Viajar en el bote";
	option2="Ignorarlo y seguir explorando";
	cout<<"Llegas a una bahia, en la playa hay un bote amarrado\n";
	cout<<"¿Y ahora que?\n";
	cout<<"(1) "<<option1<<".\n"<<"(2) "<<option2<<".\n";
	cin>>choice;
	cin.ignore();
	switch(choice){
		case 1: Choice10(); break;
		case 2: Choice11(); break;
		default: cout<<"Opcion no valida\n"; Choice8(); break;
	}
}

void Choice7(){
	option1="Seguir el camino por la derecha";
	option2="Seguir el camino por la izquierda";
	cout<<"Conforme te adentras a la cueva, esta cada vez mas oscuro.\n";
	cout<<"Las joyas que vistes eran nada mas una ilusion creada por las luz que reflejaban las rocas humedas.\n";
	cout<<"Finalmente llegas a un punto donde el camino se divide.\n";
	cout<<"¿Que direccion decies tomar?\n";
	cout<<"(1) "<<option1<<".\n"<<"(2) "<<option2<<".\n";
	cin>>choice;
	cin.ignore();
	switch(choice){
		case 1: Choice9(); break;
		case 2: Choice10(); break;
		default: cout<<"Opcion no valida\n"; Choice7(); break;
	}
}

void Choice9(){
	option1="Investigar el ruido";
	option2="Regresar a la playa";
	cout<<"Caminas con dificultad por la caverna por un tiempo que te parece una eternidad.\n";
	cout<<"De pronto, vez una luz a la distancia y corres hacia ella.\n";
	cout<<"Te encuentras en el punto mas alto de la isla, desde alli miras toda su extension.\n";
	cout<<"De pronto un ruido en la maleza te llama la atencion\n";
	cout<<"¿Que decides hacer?\n";
	cout<<"(1) "<<option1<<".\n"<<"(2) "<<option2<<".\n";
	cin>>choice;
	cin.ignore();
	switch(choice){
		case 1: Choice4(); break;
		case 2: Choice5(); break;
		default: cout<<"Opcion no valida\n"; Choice9();break;
	}
}

void Choice10(){
	option1="Regresar a la luz";
	option2="Segir explorando mas";
	cout<<"Te encuentras en una gran caverna. Cae agua caliente del techo.\n";
	cout<<"En la laguna frente a ti hay muchas estrellas de mar y al lado opuesto hay una salida.\n";
	cout<<"¿Que decides hacer?\n";
	cout<<"(1) "<<option1<<".\n"<<"(2) "<<option2<<".\n";
	cin>>choice;
	cin.ignore();
	switch(choice){
		case 1: Choice8(); break;
		case 2: Choice15(); break;
		default: cout<<"Opcion no valida\n"; Choice10(); break;
	}
}

void Choice11(){
	option1="Seguir el arroyo";
	option2="Quedarte a descansar y pensar en que lugar te encuentras";
	cout<<"Al final de la playa hay un pequeño arroyo que corre por un cerro\n";
	cout<<"¿Que decides hacer?\n";
	cout<<"(1) "<<option1<<".\n"<<"(2) "<<option2<<".\n";
	cin>>choice;
	cin.ignore();
	switch(choice){
		case 1: Choice15(); break;
		case 2: Choice16(); break;
		default: cout<<"Opcion no valida\n"; Choice11(); break;
	}
}
void Choice12(){
	option1="Volver a intentar";
	option2="Salir";
	cout<<"El sendero te lleva a lo profundo de la selva, donde te encuentras con una ciudad abandonad.\n";
	cout<<"Te adentras por la puerta principal de la ciudad, la cual se cierra detras de ti, atrapandote.\n";
	cout<<"Buscas por otra salida sin encontrar ninguna. Estas atrapado alli para siempre.\n";
	cout<<"                FIN\n\n";
	
	cout<<"¿Continuar?\n";
	cout<<"(1) "<<option1<<".\n"<<"(2) "<<option2<<".\n";
	cin>>choice;
	cin.ignore();
	
	switch(choice){
		case 1: cout<<"\n\n\n";main(); break;
		case 2: cout<<"           Made By Jacob\n\n"; 
				cout<<"            Adaptado de:\n"; 
				cout<<" Laberintos y Rompecabezas Matematicos\n\n";
				cout<<"   de Charles Snape y Heather Scott\n\n\n"; 
				cout<<"         Gracias por Jugar   ";
				break;
		default: break;
	}
}

void Choice13(){
	cout<<"Te pierdes en el camino tratando de regresar a la playa y llegas a otra parte de la isla.\n";
	cout<<"Una hermosa laguna en la distancia te atrae.\n";
	Choice15();
}

void Choice14(){
	cout<<"Va oscureciendo. Ha sido un dia largo y cansado.\n";
	cout<<"Encuentras tu refugio original y decides descansar.\n";
	cout<<"Despues de un rato te quedas dormido y no despiertas hasta que sale el sol.\n\n";
	Choice1();
}

void Choice15(){
	option1="Volver a intentar";
	option2="Salir";
	cout<<"Llegas a un hermoso lugar. Hay abundancia de fruta y agua dulce.\n";
	cout<<"Muchos peces nadan en la laguna.\n";
	cout<<"Todo esta tan tranquilo que decides quedarte a vivir alli.\n";
	cout<<"                FIN\n\n";
	
	cout<<"¿Continuar?\n";
	cout<<"(1) "<<option1<<".\n"<<"(2) "<<option2<<".\n";
	cin>>choice;
	cin.ignore();
	
	switch(choice){
		case 1: cout<<"\n\n\n";main(); break;
		case 2: cout<<"           Made By Jacob\n\n"; 
				cout<<"            Adaptado de:\n"; 
				cout<<" Laberintos y Rompecabezas Matematicos\n\n";
				cout<<"   de Charles Snape y Heather Scott\n\n\n"; 
				cout<<"         Gracias por Jugar   ";
				break;
		default: break;
	}
}

void Choice16(){
	option1="Volver a intentar";
	option2="Salir";
	cout<<"Estas sentado en la playa viendo como se va ocultando el sol.\n";
	cout<<"Oyes voces que te llaman. Miras al mar y ves una lancha de rescate con otros sobrevivientes a bordo.\n";
	cout<<"Con gran alegria te reunes con tus amigos y se embarcan rumbo a su hogar.\n";
	cout<<"                FIN\n\n";
	
	cout<<"¿Continuar?\n";
	cout<<"(1) "<<option1<<".\n"<<"(2) "<<option2<<".\n";
	cin>>choice;
	cin.ignore();
	
	switch(choice){
		case 1: cout<<"\n\n\n";main(); break;
		case 2: cout<<"           Made By Jacob\n\n"; 
				cout<<"            Adaptado de:\n"; 
				cout<<" Laberintos y Rompecabezas Matematicos\n\n";
				cout<<"   de Charles Snape y Heather Scott\n\n\n"; 
				cout<<"         Gracias por Jugar   ";
				break;
		default: break;
	}
}