*Presionamos el interruptor de encendido* 

1. La almentacion de la fuente llega a la tarjeta madre y se distribuye al sistema
	la señal de power good le indica a los circuitos asociados que inicien el 
	procesador central
	
2. Luego de que inicia el procesador el se ubica en una zona de memoria en donde
	hay un salto que le indica que vaya a la zona de inicio del programa BIOS

3. La primera subrutina grabada en la BIOS (post = power on self test) realiza un test
	de los componentes de la computadora. si el post encuentra un error, detiene el 
	proceso e indica un codigo de error (sonido o binarios)

4. el BIOS busca la tarjeta de video, busca el programa grabado en la rom de la tarjeta
	e inicia la tarjeta con dicho programa(aparece informacion en la pantalla)

5. el BIOS busca dispositivos que requieran de programas especificos como los disocos
	IDE/ATA

6. El programa inicia un chequeos como:
	*conteo completo de memoria(si hay un error, lo indica).
	*Inventario total del sistema(tipo de hadware, cartas de tiempo de los accesos a memoria,
		parametros de los discos duros, caracteristicas de los puertos i/o, tipo de procesador...)

7. Si el BIOS es PNP compatible, detectara, inicializara y configurara los dispositivos con 
		esta característica, mostrando en pantalla los mensajes correspondientes.

8. Generación de un sumario de la configuración de su PC

9. Finalmente el BIOS pasa el control al dispositivo de booteo. Los BIOS modernos permiten escoger
 	cual es el dispositivo que iniciara el boot del sistema, el disco duro o el CDROM. 
 	Si el BIOS no encuentra a quien ceder el control del boot generalmente se detiene
 	(muestra un error en dado caso)


---Fase del cargador de arranque en Linux---
