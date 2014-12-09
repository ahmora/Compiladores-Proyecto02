.class public prueba
.super java/lang/Object
.method public static main([Ljava/lang/String;)V
getstatic java/lang/System/out Ljava/io/PrintStream;
ldc "Hola Diana!, Este es un ejemplo de generacion de codigo"
invokevirtual java/io/PrintStream/println
(Ljava/lang/String;)V
bipush 2
bipush 3
imul
bipush 4
iadd
bipush 1
isub
istore 0
getstatic java/lang/System/out Ljava/io/PrintStream;
ldc "Tenemos la suma: "
invokevirtual java/io/PrintStream/println
(Ljava/lang/String;)V
getstatic java/lang/System/out Ljava/io/PrintStream;
bipush 2
bipush 3
imul
bipush 4
iadd
bipush 1
isub
invokevirtual java/io/PrintStream/println
(I)V
getstatic java/lang/System/out Ljava/io/PrintStream;
ldc "Mismo valor que se guardo en x: "
invokevirtual java/io/PrintStream/println
(Ljava/lang/String;)V
getstatic java/lang/System/out Ljava/io/PrintStream;
iload 0
invokevirtual java/io/PrintStream/println
(Ljava/lang/String;)V

return
.end method
.end class
