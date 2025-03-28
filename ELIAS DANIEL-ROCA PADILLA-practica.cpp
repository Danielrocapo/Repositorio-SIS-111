#include <iostream>
using namespace std;


int main() {
    int opcion; // Variable para almacenar las opciones del jugador
    bool tienesLlave = false;
    while (true) { // Bucle principal para repetir el menú inicial
        // Menú inicial
        cout << "Bienvenido a esta aventura.\n";
        cout << "Estas en una cueva extraña, como? No importa realmente, no tienes mas opciones que las que te doy y tienes que salir.\n";
        cout << "1. Explorar la cueva\n";


        cin >> opcion;

        // asegurarse que se pongan las opciones correctas
        while (opcion < 1 || opcion > 1) {
            cout << "Opción inválida. Por favor, elige la opción 1:\n";
            cin >> opcion;
        }

        // Rama: Explorar la cueva
        if (opcion == 1) {
            while (true) { // Bucle interno para las opciones dentro de la cueva
                cout << "Te adentras en una cueva oscura y fría. Los ecos de tus pasos resuenan por los túneles.\n";
                cout << "Delante de ti, el camino se divide en cuatro direcciones:\n";
                cout << "1. Un estrecho túnel a la derecha, de donde proviene un murmullo extraño.\n";
                cout << "2. Un sendero ancho al centro que parece el más transitado.\n";
                cout << "3. Un oscuro pasaje a la izquierda, con extrañas marcas en las paredes.\n";
                cout << "4. Un pozo profundo, con una cuerda vieja colgando hacia abajo.\n";

                cin >> opcion;

                // asegurarse que se pongan las opciones correctas
                while (opcion < 1 || opcion > 4) {
                    cout << "Opción inválida. Por favor, elige una opción entre 1 y 4:\n";
                    cin >> opcion;
                }

                // Rama: Tunel a la derecha
                if (opcion == 1) {
                    cout << "Decides tomar el túnel a la derecha. El murmullo se hace más fuerte a medida que avanzas.\n";
                    cout << "Llegas a una pequeña cámara con una fuente de agua cristalina y un extraño brillo en el fondo.\n";
                    cout << "Tienes cuatro opciones:\n";
                    cout << "1. Intentar alcanzar el objeto brillante en el agua.\n";
                    cout << "2. Beber un poco de agua de la fuente.\n";
                    cout << "3. Investigar los alrededores de la cámara en busca de pistas.\n";
                    cout << "4. Volver al cruce inicial.\n";

                    cin >> opcion;

                    // asegurarse que se pongan las opciones correctas
                    while (opcion < 1 || opcion > 4) {
                        cout << "Opción inválida. Por favor, elige una opción entre 1 y 4:\n";
                        cin >> opcion;
                    }
                    //opciones dentro de la cueva
                    if (opcion == 1) {
                        cout << "Sumerges tu mano en el agua fría y logras sacar un colgante dorado con un símbolo extraño.\n";
                        cout << "Sin embargo, el suelo comienza a temblar y una puerta secreta se abre frente a ti.\n";
                        cout << "Tienes dos opciones:\n";
                        cout << "1. Entrar por la puerta secreta para investigar más.\n";
                        cout << "2. Dejar el colgante en la fuente y salir corriendo.\n";
                        
                        cin >> opcion;

    
                        while (opcion < 1 || opcion > 2) {
                            cout << "Opción inválida. Por favor, elige una opción entre 1 y 4:\n";
                            cin >> opcion;
                        }

                        //opciones de la opcion 1 de la opcion 1
                        if (opcion == 1) {
                            cout << "Decides entrar por la puerta secreta. Una sala enorme se revela ante ti, llena de tesoros antiguos.\n";
                            cout << "Encuentras libros con conocimiento perdido, monedas de oro y un mapa que revela los secretos de la isla.\n";
                            cout << "¡Encuentras un tesoro escondido y te conviertes en leyenda!\n";
                            cout << "Fin: ¡Has triunfado en tu misión!, logras escapar por una salida que estaba en la sala \n";
                            break;
                        } else if (opcion == 2) {
                            cout << "Dejas rápidamente el colgante en la fuente y corres hacia la salida.\n";
                            cout << "Aunque logras escapar, nunca descubrirás los secretos que escondía esa sala misteriosa.\n";
                            cout << "Fin: Regresas al mundo real, pero con dudas sobre lo que pudo haber sucedido.\n";
                            break;
                        }    
                    
                        
                    //opciones de la opcon 2 de la opcion 1    
                    } else if (opcion == 2) {
                        cout << "Tomas un sorbo del agua fresca. De inmediato, una extraña sensación recorre tu cuerpo.\n";
                        cout << "Escuchas una voz susurrando: 'El elegido está aquí.'\n";
                        cout << "Tienes dos opciones:\n";
                        cout << "1. Responder a la voz preguntando quién está hablando.\n";
                        cout << "2. Salir de la cámara antes de que ocurra algo más.\n";
                        cin >> opcion;

    
                        while (opcion < 1 || opcion > 2) {
                            cout << "Opción inválida. Por favor, elige una opción entre 1 y 4:\n";
                            cin >> opcion;
                        }

                        if (opcion == 1) {
                            cout << "La voz antigua responde: 'Eres el elegido para proteger este lugar.'\n";
                            cout << "Tu destino está sellado. Te conviertes en el guardián eterno de la fuente y sus secretos.\n";
                            cout << "Fin: Tu vida ahora pertenece a la cueva y sus misterios.\n";
                            break;
                        } else if (opcion == 2) {
                            continue;
                        }                        
                        
                    } else if (opcion == 3) {
                        cout << "Inspeccionas las paredes de la cámara y encuentras grabados que cuentan la historia de un antiguo guardián de la isla.\n";
                        cout << "Los grabados mencionan una maldición asociada con la fuente.\n";
                        cout << "Tienes dos opciones:\n";
                        cout << "1. Intentar traducir los grabados y aprender más sobre la historia.\n";
                        cout << "2. Decidir abandonar la cámara antes de atraer problemas.\n";
                        
                        cin >> opcion;

    
                        while (opcion < 1 || opcion > 2) {
                            cout << "Opción inválida. Por favor, elige una opción entre 1 y 4:\n";
                            cin >> opcion;
                        }                        
                        
                        if (opcion == 1) {
                            cout << "Logras descifrar los grabados y descubres la manera de romper una maldición antigua.\n";
                            cout << "Sin embargo, al hacerlo, el lugar comienza a derrumbarse y quedas atrapado para siempre.\n";
                            cout << "Fin: Tu valentía no será recordada, y no logras escapar.\n";
                            break;
                        } else if (opcion == 2) {
                            continue;
                            
                        }                    
                        
                        
                    } else if (opcion == 4) {
                        continue; // Regresa al inicio de la cueva
                    }
                }
                 //hasta aqui la primera opcion
                 // Rama: Buscar una salida oculta en la sala
                if (opcion == 2) {
                    cout << "Comienzas a inspeccionar la sala en busca de una salida oculta. Mueves varias piedras y examinas cada rincón.\n";
                    cout << "La sala parece estar llena de misterios, y sientes que hay algo más detrás de estas paredes.\n";

                    int intentos = 3; // Número de intentos disponibles
                    bool escapaste = false; // entrada para verificar el escape
                    //mientras los intentos sean mas de 0 y no escapes sigue el while
                    while (intentos > 0 && !escapaste) {
                        cout << "Tienes " << intentos << " intentos para encontrar una salida antes de que la sala colapse.\n";
                        cout << "Elige una acción:\n";
                        cout << "1. Empujar una piedra grande que parece estar fuera de lugar.\n";
                        cout << "2. Examinar una grieta en la pared.\n";
                        cout << "3. Buscar bajo el altar por algún mecanismo secreto.\n";
                        cout << "4. Rendirte y esperar a que todo termine.\n";

                        cin >> opcion;

                        // asegurarse que se pongan las opciones correctas
                        while (opcion < 1 || opcion > 4) {
                            cout << "Opción inválida. Por favor, elige una opción entre 1 y 4:\n";
                            cin >> opcion;
                        }

                        if (opcion == 1) { // Acción 1: Empujar la piedra
                            cout << "Empujas la piedra con todas tus fuerzas. Al principio no parece moverse, pero después de intentarlo, se abre un pequeño pasaje.\n";
                            cout << "Logras escapar por el pasaje justo antes de que la sala colapse.\n";
                            cout << "Fin: ¡Encuentras una nueva sala llena de riquezas y logras sobrevivir!\n";
                            escapaste = true; // Marcar que el jugador escapó
                            return 0;
                        } else if (opcion == 2) { // Acción 2: Examinar la grieta
                            cout << "Examinar la grieta revela un pergamino antiguo. Sin embargo, no parece ayudarte a escapar. El tiempo corre.\n";
                            intentos--; // Reducir el número de intentos
                        } else if (opcion == 3) { // Acción 3: Buscar bajo el altar
                            cout << "Buscas bajo el altar y encuentras un mecanismo oculto. Lo activas, pero no parece abrir ninguna salida.\n";
                            intentos--; // Reducir el número de intentos
                        } else if (opcion == 4) { // Acción 4: Rendirse
                            cout << "Decides rendirte y esperas que todo termine. La sala comienza a derrumbarse a tu alrededor...\n";
                            cout << "Fin: La sala colapsa completamente y no logras escapar.\n";
                            return 0;
                        }
                    

                    }
                    

                    if (!escapaste && intentos == 0) {
                        cout << "El tiempo se acaba y la sala comienza a derrumbarse. No logras encontrar una salida.\n";
                        cout << "Fin: Quedas atrapado en la cueva para siempre.\n";
                    }
                }

 
        
                // Rama: Pasaje oscuro a la izquierda
                if (opcion == 3) { // Pasaje oscuro a la izquierda
                    bool regresar= false;//pa salirse al inicio
                    while (!regresar){
                        cout << "Te adentras en el oscuro pasaje a la izquierda, observando las marcas extrañas en las paredes mientras avanzas con cautela.\n";
                        cout << "Tras caminar un rato, llegas a una pequeña cámara iluminada por un tenue resplandor proveniente del techo.\n";
                        cout << "Tienes tres opciones:\n";
                        cout << "1. Examinar las marcas en las paredes más de cerca.\n";
                        cout << "2. Buscar en el suelo algún objeto extraño o pista.\n";
                        cout << "3. Salir del pasaje y volver al cruce inicial.\n";

                        cin >> opcion;

                        // asegurarse que se pongan las opciones correctas
                        while (opcion < 1 || opcion > 3) {
                            cout << "Opción inválida. Por favor, elige una opción entre 1 y 3:\n";
                            cin >> opcion;
                        }

                        if (opcion == 1) { // Examinar las marcas
                            cout << "Las marcas en las paredes cuentan la historia de un antiguo guardián que protegía un artefacto escondido en el fondo del pozo.\n";
                            cout << "Quizás un objeto especial sea necesario para desbloquear este artefacto...\n";
                            continue;
                        } else if (opcion == 2) { // Buscar en el suelo
                            cout << "Revisas cuidadosamente el suelo y encuentras una llave oxidada entre los escombros. No sabes para qué sirve, pero decides llevarla contigo.\n";
                            tienesLlave = true; // Marca que el jugador tiene la llave
                            regresar=true;
                        } else if (opcion == 3) { // Volver al cruce inicial
                            cout << "Decides regresar al cruce inicial para explorar otros caminos.\n";
                            break;
                        }
                
                    }
                }
        
                // Rama: Pozo profundo
                if (opcion == 4) { // Pozo profundo
                    cout << "Te acercas al borde del pozo profundo y ves una cuerda vieja colgando hacia abajo. Decides descender con cuidado.\n";
                    cout << "Al llegar al fondo, encuentras un pasaje subterráneo lleno de estalagmitas y una puerta cerrada con un extraño mecanismo.\n";
                    cout << "Tienes tres opciones:\n";
                    cout << "1. Examinar la puerta más de cerca.\n";
                    cout << "2. Intentar abrir la puerta con la llave.\n";
                    cout << "3. Subir por la cuerda y regresar al cruce inicial.\n";

                    cin >> opcion;

                    // asegurarse que se pongan las opciones correctas
                    while (opcion < 1 || opcion > 3) {
                        cout << "Opción inválida. Por favor, elige una opción entre 1 y 3:\n";
                        cin >> opcion;
                    }

                    if (opcion == 1) { // Examinar la puerta
                        cout << "La puerta tiene un mecanismo que parece requerir una llave especial para abrirse. Sin ella, la salida permanece cerrada.\n";
                    } else if (opcion == 2) { // Usar la llave
                        if (tienesLlave) {
                            cout << "Usas la llave encontrada en el pasaje oscuro para desbloquear la puerta. Se abre revelando una salida segura.\n";
                            cout << "¡Logras escapar de la cueva y sobrevivir! Fin: ¡Eres libre!\n";
                            return 0; // Finaliza el juego
                        } else {
                            cout << "Intentas abrir la puerta, pero necesitas una llave especial para desbloquearla.\n";
                            cout << "Sin ella, no hay forma de salir por esta ruta.\n";
                        }
                    } else if (opcion == 3) { // Regresar al cruce inicial
                        cout << "Decides regresar al cruce inicial para buscar otras opciones.\n";
                    }
                }



        
            }    
            
        break;
        }


        
    }
    cout << "Gracias por jugar.\n";
    return 0;


}

