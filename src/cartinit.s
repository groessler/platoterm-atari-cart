; Cartridge init routine
;
; Christian Groessler, 06-Jan-2014

.ifndef __ATARIXL__

.export         cartinit

.segment        "UPPERBANK"
	
cartinit:       rts

.endif  ; .ifndef __ATARIXL__
