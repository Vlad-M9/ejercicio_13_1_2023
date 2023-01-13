int intercambiarEnteros(int *numero1, int *numero2);

int main(int argc, char const *argv[])
{
int numero1 = 50, numero2 = 85;
printf("Antes de llamar a la funcion, numero1 es %d y numero2 es %d\n", numero1, numero2);

// Con el operador & obtenemos la dirección de las variables
intercambiarEnteros(&numero1, &numero2);
printf("Despues de llamar a la funcion, numero1 es %d y numero2 es %d\n", numero1, numero2);
}

// Ahora sí definimos la función con todo y cuerpo
int intercambiarEnteros(int *numero1, int *numero2){
int temporal = (*numero1);
(*numero1) = (*numero2);
(*numero2) = temporal;
}
