#include <iostream>
using namespace std;

int main() {
    int horai, horaf;
    
    cout << "Ingrese la hora de inicio y de fin del alquiler:" << endl;
    cin >> horai >> horaf;
    

    if (horai == horaf) {
        cout << "Que extraño, no has alquilado tu bicicleta por mucho tiempo!" << endl;
        return 0;
    }
    if (horai > horaf) {
        cout << "Que extraño, el inicio del alquiler es después del final!" << endl;
        return 0;
    }
    if (horai < 0 || horai > 23 || horaf < 1 || horaf > 24) {
        cout << "Las horas deben estar entre 0 y 24!" << endl;
        return 0;
    }


    int tarifa1 = 0, tarifa2 = 0;


    for (int hora = horai; hora < horaf; hora++) {
        if ((hora >= 0 && hora < 7) || (hora >= 17 && hora < 24)) {
            tarifa1++;
        } else if (hora >= 7 && hora < 17) {
            tarifa2++;
        }
    }


    int total = tarifa1 * 1 + tarifa2 * 2;


    if (tarifa1 > 0) {
        cout << "Has alquilado una bicicleta por " << tarifa1 << " hora(s) con el tarifario de 1 boliviano(s)" << endl;
    }
    if (tarifa2 > 0) {
        cout << "Has alquilado una bicicleta por " << tarifa2 << " hora(s) con el tarifario de 2 boliviano(s)" << endl;
    }
    cout << "El monto total a pagar es de " << total << " boliviano(s)." << endl;

    return 0;
}
