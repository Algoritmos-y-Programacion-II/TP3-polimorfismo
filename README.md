75.41/95.15: Algoritmos y Programacion II - Catedra Juarez - 1°C 2020
================
Trabajo Practico Individual N3: Lista Polimórfica de Figuras
------------
La finalidad del programa es meramente educativo, para ver el manejo de una lista dinámica y polimórfica.
 
El programa se encarga de leer un archivo .txt y armar una lista dinámica y polimórfica que almacena los datos de dicho 
archivo.

El formato del archivo debe ser:

   * X numero
   * X numero numero
    
Donde X es un caracter que puede ser C (circulo), R (rectangulo), o T (triangulo), y el numero que acompaña a la letra 
es el radio, o la base y altura.
Por ejemplo:

    R 5.3 2.1
 
    T 4.1 8
 
    C 3.2
    
El programa tiene un menú que le permite al usuario realizar distintas operaciones:
   1. Ver los atributos de un objeto en una determinada posicion
   2. Dar de baja un objeto de cierta posición
   3. Agregar un nuevo objeto de forma manual
   4. Listar todos los objetos
   5. Mostrar la figura con el área máxima
   6. Mostrar la figura con el área mínima

Hecho con C++.


UML
------------
<div style="width: 640px; height: 480px; margin: 10px; position: relative;"><iframe allowfullscreen frameborder="0" style="width:640px; height:480px" src="https://app.lucidchart.com/documents/embeddedchart/3449b957-8e6d-49e4-85ff-a5bf505d5faa" id="j_.-mSvnwtdg"></iframe></div>

Instalación
------------

- Instale algún compilador de C++ de su preferencia
    - Linux 
    
            sudo apt-get update
            sudo apt-get upgrade
            sudo apt-get install build-essential
            
    - Windows 
        - [MinGw](https://osdn.net/projects/mingw/releases/) 
        - [Cygwin](https://sourceware.org/cygwin/)
        - [CLang](https://releases.llvm.org/download.html)
        
- Instale Git
	- Linux 
	
	      sudo apt-get update
		  sudo apt-get install git
		    
	- Windows [Descargar Git](https://git-scm.com/downloads)

- Desde la terminal vaya a la ubicacion en donde desea tener el proyecto, y clonelo con `git clone https://github.com/valva-ro/trabajoPractico3Figuras` 
- Asegure de tener un archivo .txt en el directorio del proyecto.
- Compile con `g++ *.cpp -o figuras`
   
    - Si el archivo de texto se llama "figuras.txt" 
    
        Ejecute `./figuras`
    
    - De lo contrario
    
        Ejecute `./figuras [nombre del archivo]`

Contribución
----------

- [Issue Tracker](https://github.com/valva-ro/trabajoPractico3Figuras/issues)
- [Source Code](https://github.com/valva-ro/trabajoPractico3Figuras)


Soporte
-------

Si estás teniendo algún problema, por favor hacemelo saber.
