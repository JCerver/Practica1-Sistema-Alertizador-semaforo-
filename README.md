# Practica1-Sistema-Alertizador-semaforo-
Práctica 1: Sistema alertizador salvaguarda humano-coche de la materia de Sistemas Programables.

Para la primera práctica vamos a realizar un sistema en el cual se integren todos los conceptos vistos
en la materia.

Las instrucciones son las siguientes:
Realizar un sistema que simule un semáforo interactivo usando Arduino. Este debe mostrar un
conjunto de semáforos que cambiaran de verde a ambar a rojo, y viceversa, luego de un periodo
de tiempo establecido, utilizando el sistema de cuatro estados de los semáforos en México. Este
se extiende para incluir un conjunto de luces y un botón peatonal para solicitar cruzar la calle.
Cuando llega el peatón y se dispone a cruzar pulsa el botón que encuentra en la parte baja del
semáforo, este reconoce la orden y cierra el paso de los vehículos para que el viandante pueda
cruzar con seguridad hasta el otro lado de la calle. Una vez que se acaba el tiempo estipulado para
que el peatón cruce, ese semáforo permanecerá abierto para mejorar la movilidad de los
vehículos. El sistema deberá de contener una perilla para controlar el tiempo mínimo en que el
semáforo vehicular va a durar en verde.

Componentes necesarios a utilizar:

    Arduino UNO (o equivalente)
    Protoboard para conectar los componentes
    5 resistencias de 330 Ω
    1 resistencias de 1 kΩ
    2 LEDs verdes
    1 LEDs amarillos
    2 LEDs rojos
    1 pulsador o boton
    1 potenciometro de 15 kΩ
    Cables

Antes de poder iniciar la práctica es bueno tener en cuenta la teoria que vamos a aplicar, ya que sin
la teoria no se tendría conocimiento previo y no comprenderiamos el porque estamos haciendo las cosas.
Un componente que vamos a utilizar y que debemos conocer son los pulsadores. Gracias a estos componentes podemos dejar pasar
o no la corriente. Con los  pulsadores vamos a simular un botón para que el peatón pida el paso en cruce vial.
Resistencia pull down, evita indeterminaciones en los pulsadores, Se trata de dos configuraciones que nos permiten tener un estado bajo (0 Voltios) 
o estado alto (5 Voltios) cuando un cable está al aíre. Esto es lo que sucede con los pulsadores, mientras que no pulsemos, tenemos el pin al aire y
se produce una indeterminación.

Para determinar el tiempo de espera para que el peatón pueda volver a pulsar el botón después de que se pulso previamente utilizaremos
un potenciometro, este componente  es un resistor eléctrico con un valor de resistencia variable que ajustamos manualmente. Los pontenciómetros utilizan 
tres terminales y se suelen utilizar en circuitos de poca corriente, como en esta practica. Dependiendo del valor registrado del potenciometro, sera el tiempo
de espera para volver a pedir el paso.



