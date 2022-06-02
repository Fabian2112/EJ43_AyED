// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

// Declaraciones adelantadas de las funciones
bool entre25y40mil(float sueldo);

int main() {
	string bs;
	int cempleados;
	int csue25y40;
	int csue30;
	int dni;
	int dnimaxsue;
	int maxcempleados;
	int maxcsue30;
	float maxsue;
	int n;
	int ns;
	int sede;
	int sedemaxcempleados;
	int sedemaxcsue30;
	float sue;
	float suesede;
	float suetot;
	int tt;
	n = 3;
	maxcsue30 = 0;
	suetot = 0;
	maxsue = 0;
	maxcempleados = 0;
	for (sede=1;sede<=n;sede++) {
		suesede = 0;
		csue25y40 = 0;
		cempleados = 0;
		cout << "Ingrese el Numero de la sede" << endl;
		cin >> ns;
		cout << "Ingrese el barrio de la sede Nro " << ns << endl;
		cin >> bs;
		cout << "Ingrese el DNI del empleado" << endl;
		cin >> dni;
		while (dni!=0) {
			cout << "Ingrese Sueldo" << endl;
			cin >> sue;
			cout << "Ingrese tipo de tarea (1-10)" << endl;
			cin >> tt;
			if (entre25y40mil(sue)) {
				csue25y40 = csue25y40+1;
			}
			suesede = suesede+sue;
			cempleados = cempleados+1;
			if (tt==1) {
				if (sue>maxsue) {
					maxsue = sue;
					dnimaxsue = dni;
				}
			}
			cout << "Ingrese el DNI del empleado" << endl;
			cin >> dni;
		}
		if (cempleados>maxcempleados) {
			maxcempleados = cempleados;
			sedemaxcempleados = ns;
		}
		cout << "En sede " << bs << " hay " << csue25y40 << " empleados con sueldos entre $25000 y $40000" << endl;
		cout << "En Sede " << bs << " hay que abonar $" << suesede << " de sueldos" << endl;
		suetot = suetot+suesede;
	}
	cout << "Sede con mayor cant de empleados es " << sedemaxcempleados << " con " << cempleados << " empleados" << endl;
	cout << "El empleado con mayor sueldo de TT=1 es DNI " << dnimaxsue << endl;
	cout << "Entre todas las sedes hay que abonar $" << suetot << " en sueldos" << endl;
	return 0;
}

bool entre25y40mil(float sueldo) {
	bool e20y40mil;
	if (sueldo>=25000 && sueldo<=40000) {
		e20y40mil = true;
	} else {
		e20y40mil = false;
	}
	return e20y40mil;
}

