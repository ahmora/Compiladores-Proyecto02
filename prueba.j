.class public prueba
.super java/lang/Object
.method public static main([Ljava/lang/String;)V
getstatic java/lang/System/out Ljava/io/PrintStream;
ldc "Hola mundo!"
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
bipush 2
istore_0
bipush 3
istore_1
iload_0
iload_1
imul
istore_0
bipush 4
istore_1
iload_0
iload_1
iadd
istore_0
bipush 1
istore_1
iload_0
iload_1
isub
istore_0
getstatic java/lang/System/out Ljava/io/PrintStream;
iload_0
invokevirtual java/io/PrintStream/println
(I)V

return
.end method
.end class
