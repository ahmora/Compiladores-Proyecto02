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
istore 0
bipush 3
istore 0
iload 0
iload 0
imul
istore 0
bipush 4
istore 0
iload 0
iload 0
iadd
istore 0
bipush 1
istore 0
iload 0
iload 0
isub
istore 0
getstatic java/lang/System/out Ljava/io/PrintStream;
iload 0
invokevirtual java/io/PrintStream/println
(I)V

return
.end method
.end class
