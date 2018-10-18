# Fundamentos de Programación
Repositorio de partida para las prácticas de Fundamentos de Programación, asignatura de segundo curso del Grado en Ingeniería en Tecnología de Telecomunicación de la UPV/EHU.

## Estructura
Se empieza con un **repositorio nuevo en cada práctica** y dentro de cada repositorio se van añadiendo los proyectos de NetBeans, **un proyecto por cada ejercicio de la práctica**.

En tu disco duro debería ir quedando una estructura de directorios de la siguiente manera:

<pre>
NetBeansProjects/
├── p1-operaciones-basicas-jtppragg     -> repositorio
│   ├── ejercicio1                      -> proyecto de NetBeans
│   │   └── main.c                      -> fichero de código
│   ├── ejercicio2                      -> proyecto de NetBeans
│   │   └── main.c                      -> fichero de código
│   └── etc.
├── p2-sentencias-selectivas-jtppragg   -> repositorio
│   ├── ejercicio1                      -> proyecto de NetBeans
│   │   └── main.c                      -> fichero de código	
│   ├── ejercicio2
│   │   └── main.c
│   └── etc.
├── p3-sentencias-repetitivas-jtppragg
│   ├── ejercicio1
│   │   └── main.c
│   ├── ejercicio2
│   │   └── main.c
│   └── etc.
└── etc.
</pre>

## GitHub Classroom
Para cada práctica:

* Cuando trabajes en un PC por primera vez haz un **clone**.
* Si ya habías trabajado antes en ese PC haz un **pull**.
* Cada vez que hagas un cambio haz un **commit** seguido de un **push**.

## Profesor
El directorio `profesor` contiene código de utilidad a partir de la práctica 5. Te permite comprobar si se te ha olvidado liberar memoria o cerrar algún fichero. Para utilizarlo basta con incluir la siguiente línea en tu código:

```c
#include "../../profesor/supervisor_c.h"
```
