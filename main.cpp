#include <vector>
#include <string>
#include <iostream>

using namespace std;

//Clase 'Padre'
//Aquí solo vamos a tomar en cuenta que todas las personas tienen de atributo el 'nombre'
class Persona{

    private:
     string nombre;

    public: 
     Persona(string);
//se crea nuestro objeto que se va a mandar a llamar con distintos propositos 
//polimorfismo 'virtual'
     virtual void mostrar();
};

//se crea el constructor Persona

Persona::Persona(string _nombre){
    nombre = _nombre;
};
 
 //Se crea la primera clase derivada 'Alumno'
class Alumno : public Persona{
    //solo se especifican los atributos que se agregarian al de persona, cómo : 'matricula y `plan(carrera)'
   private:
   int matricula;
   string plan;

   public:
   Alumno(string, int, string);
   void mostrar();
};

//se crea el constructor Alumno

Alumno::Alumno(string _nombre, int _matricula, string _plan) : Persona(_nombre){
    matricula = _matricula;
    plan = _plan;
};

 //Se crea la segunda clase derivada 'Profesor'

class Profesor : public Persona{

    //solo se especifican los atributos que se agregarian al de persona, cómo : 'nomina y `departamento'
    private:
    int nomina;
    string departamento;

    public:
    Profesor(string, int, string);
    void mostrar();
};

//se crea el constructor Profesor

Profesor::Profesor(string _nombre, int _nomina, string _departamento) : Persona(_nombre){
    nomina = _nomina;
    departamento = _departamento;
};

//se especifica cómo funcionaría el muestra para la clase Profesor

void Profesor::mostrar(){
      Persona :: mostrar();
      cout << "Nómina: " << nomina << std::endl; 
      cout << "Departamento de: " << departamento << std::endl; 
};



//se especifica cómo funcionaría el muestra para la clase persona 

void Persona::mostrar(){
      cout << "Nombre:" << nombre << std::endl; 
};

//se especifica cómo funcionaría el muestra para la clase Alumno

void Alumno::mostrar(){
      Persona :: mostrar();
      cout << "matricula: " << matricula << std::endl; 
      cout << "plan: " << plan << std::endl; 

};

int main(){
    Persona *vector [5];

    vector[0] = new Alumno("Juan Sánchez", A01234567, "Ing. Mecatrónica");
    vector[1] = new Profesor("Ernesto Ramírez", L00700700, "Computación");
    vector[2] = new Alumno("Mónica Pérez", A01223344, "Ing. en Tecnologías Computacionales");
    vector[3] = new Alumno("Carlos Augusto Amador", A01234455,"Ing. Industrial");
    vector[4] = new Profesor("José Antonio Rodríguez",L099999, "Ciencias Básicas");

    vector[0] -> mostrar();
    cout<<"\n";
    vector[1] -> mostrar();
    cout<<"\n";
    vector[2] -> mostrar();
    cout<<"\n";
    vector[3] -> mostrar();
    cout<<"\n";
    vector[4] -> mostrar();
    cout<<"\n";

    return 0;
};