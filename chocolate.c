//INFORMACIÓN

/*

# Best use of cocoa - Bronze award

### To run:

#### Embed text (from file or command line):

    ./vik e base.png filename > encodedimg.png
    # or
    ./vik e base.png SomeRandomText > encodedimg.png

#### Extract the embedded text:

    ./vik d encodedimg.png

#### Embed a PNG into another

    ./vik e base.png source.png > encodedimg.png

#### Extract the embedded PNG:

    ./vik d encodedimg.png > restored.png

### Try:

    ./vik e ioccc.png chocolate.png > chocolate-in-ioccc.png
    ./vik e chocolate.png ioccc.png > ioccc-in-chocolate.png
    ./vik d chocolate-in-ioccc.png > restored-chocolate.png
    ./vik d ioccc-in-chocolate.png > restored-ioccc.png

### Selected Judges Remarks:

References to chocolate had no effect on judging this entry. We
guarantee it.

Can you discern hidden pieces of chocolate in chocolate-in-ioccc.png ?


## Author's comments:
Introduction
------------

This program is a  steganography application for embedding an image or text
into another image as well as extracting  the embedded image  or text back.
The program stores  the embedded  image or text in  the low bits of the RGB
values.

The program supports any 8 bit true color PNG images (RGB, RGBA, grayscale,
and grayscale+alpha). The output image is always 8 bit RGB.  When embedding
one image into another, the width and height needs to be the same.

The program only updates the IDAT and IHDR chunks of the source image.  Any
additional chunks are copied into the resulting image.

### Bonus Extractor:

For some reason the chocolate image seems to have some  special properties.
Apart from  being quite big  and a little bit noisy,  it appears  that when
embedded into  another image and extracted, the bitmap data is also a valid
brain$#@$ program. It is of course possible to get the bitmap data from the
extracted image, and run it through  any of the previous  winning brain$#@$
interpreters, but I thought it would be easier to include an interpreter in
the program  to avoid the hassle:

    ./vik e ioccc.png chocolate.png > encodedimg.png
    ./vik b encodedimg.png

It is of course also possible  to embed a brain$#@$ program  as a text file
(as explained above) and decode it, e.g.:

    ./vik e ioccc.png .+[.+] > encodedimg.png
    ./vik b encodedimg.png


### Obfuscation

I really wanted to keep  the program simple,  so instead of adding multiple
macros or helper methods that can be confusing,  I placed all functionality
in the main function. Main is called recursively and quite extensively, but
it gives  the benefit  that all  invocations of  the function  has the same
parameters, argv and argc.   This really helps readability, as a programmer
doesnâ€™t need to remember several variable or function names.   I also tried
to reduce the number of keywords,  and the program only  has four for-loops
followed by a single return statement.  There is a little bit of use of the
question mark operator,   but this is really  there to keep  the program as
simple as possible.


### Portability

The program is portable to most platforms that  have zlib  available.   The
only system dependency is that the program relies on writing binary data to
stdout.

By default, Microsoft compilers adds carriage returns to new lines,  and to
compile the program on this platform, the following line can be added after
the  variable  declarations  in  the  main  declaration  in  order  to  run
correctly:

    _setmode(_fileno(stdout), 0x8000);


### Limitations

The program doesnâ€™t have many error checks so passing in  invalid arguments
or images of mismatching sizes, or unsupported pixel formats will cause the
program to crash.


### Extendability

Since a lot of care was taken to keep the code simple,  it turned out to be
quite easy to extend functionality. I did include a small brain$#@$ after I
realized that the chocolate image had some interesting properties.

But there  is more functionality  I added that didnâ€™t  fit within  the size
limits and could not remain included.   For example,  I added  a method  to
format source code based on a PNG image.   So the format  of the program is
actually done by the program itself.

And to be honest,   the chocolate  image  did not have  a brain$#@$ program
embedded to begin with.   I added functionality to the  program to  embed a
brain$#@$  into a  PNG image and used it  to create the image provided with
the entry.

I also added a method to analyze PNG images,  to print the size and format,
as well as the scan line filters.

All these features  were quite easy to add,   much thanks to  the (actually
pretty good) design of the code.

--------------------------------------------------------------------------------
<!--
(c) Copyright 1984-2012, [Leo Broukhis, Simon Cooper, Landon Curt Noll][judges] - All rights reserved
This work is licensed under a [Creative Commons Attribution-ShareAlike 3.0 Unported License][cc].

*/



#include <stdio.h>
#include <string.h>
#include "zlib.h"




      int
    i,j,k,l
  ,m,n,Q,W,H,
 B,Z,Y,X,O=1<<24
  ; char*A[999],x[
   1<<24],z[1<<24],
     s[1<<24],t[2<<24
         ],w[2<<24],*E;
           uLong N;  FILE
             *f ; int  main(
                int c,char**v){
                  unsigned char**V
                     =(unsigned char
                        **)v; for(m=0;
                            c==-11&&m<H
                              ; m++, (*v)
                                +=m%3==0&&
                                (B&4) ,V[4]
                                 ++) n=m%W,
                                  l=n?l:*(*V
                                  )++,*V[4]=
                                   !(B&2)&&
                                    n%3?V[4
                                    ][-1]:
                                     (i=
                                    n<3?0:
                                  V[4][-3],j
                                =m/W?V[4][-W
                               ]:0,Z=k=!(m/W)
                              ||n<3?0:V[4][-3
                             -W],*(*V)+++(l?l
                             -1?l-2?l-3?(X=j-
                             Z,X=X>0?X:-X,Y=i-
                            Z,Y=Y>0?Y:-Y,Z=i+j
                            -Z-Z,Z=Z>0?Z:-Z,X>Y
                           ||X>Z?Y   >Z?k:j:i):
                           (i+j)    /2:j:i:0));
                          for(     E=t+O; *v-1[v]
                         &&c==   -16; ++*v)n=**v,n
                         -62?   n-60?n  -91?n-93||!
                        m||    !*E?*    v:(*v=A[--m+9
                       ]):    (A[9+    m++]=*v-1):--E
                      :++       E      ,n-43?n-44?n-45?
                     n-        46    ?0:putchar(*E):--*E
                   :(*       E=     getchar()):++*E; for(;
                   7<       -c     &&11>-c&&*v!=5[v]; ++*v)
                 **V      =c     +8?c+9?*V[1]++<<6|56:**V|~3
                &*V     [1]     ++:**V>>6; for(; m<n*2; m+=2)c
              +18?    c+19      ?0:(V[1][m/8]+=(*V[0] ++-56)>>m
             %8)     :(*       V[1]++=V[0][m/8]<<m%8 ); return !
           c?c:     c>0       ?n=main(-7,(Q=**++v,N=0x49444154,*A
         =s+4,    main      (-128   ,A),A[1]=*++v,A  [4]=z,*A=x,A))
        ,c=A[    6]         -x-    12,Q-101?main(-19,(main(-10,(A[5]=
       t+n,    *A=          t,   A[1]=z,A)),*A=t,A  [1]=w,A)):main(-9,(
      main(   -8                ,((n=main(-7,(A[1]   =*++v,A[4]=t,*A=s+4,
    A)))<0               ?      main     (-18,(n=  -n,*A=s,A[1]=t,A)):0,A[
    5]=t+n            ,*A=     t,A)      ),*A=t,  A[1]=z,A)),98-Q?E=memcmp(
   w,s,4              )?      n+=       main(-22  ,(*A=z,A[1    ]=t,A[2]=t+n
  ,A)),            N=n=     main     (-23,(*A=t, A[1]=z,A[2       ]=z+n,A)),
  memmove         (x+      c+n+12   ,x+c,12),memcpy(x+c+8,t,     n),main(-128
  ,(*A=          x+c       +4,A))   ,N=crc32(    0,memcpy(x       +c+4,s,4),n
 +4),           main       (-128,   (*A=x+c+     n+12,A)),n       +=c+24,x:(n=
 strlen         (w        +4),w+4),fwrite(E     ,1,n,stdout):  main(-16,(*A=w,
 A[1]=w    +H, A))       :-c>31?main(c+=32     ,(*--*v=N,N>>=8,v)):-++c<4?(-c)
 [*V]+256*main(c,v    ):c+23?c+22?c+21?c+6?c+5?c+4?0:(N=O,uncompress(*v=s+4,&N
  ,v[3],v[2]-v[3]   ),main(c-7,v),H):(n-=l=main(-4,v)+12,5[*v]-68?(v[6]=(*v+=
  l)):(memcpy(v[2],*v+8,l-12),v[2]+=l-12,memmove(*v,*v+l,n)),main(c-(n>8),v))
  :(n=  main(-24,v),main(-4,v)-0x89504e47?-H:main(c,(*v+=16,W=main(-4,v)*3,*v
   +=       4,H=main(-4,v)*W,B=(*v)[5],(*v)[5]=2,N=crc32(0,*v-    8,17),*v+=
    13         ,main(-128,v),v[3]=v[2]=w+O,*v-=21,v))):(*      *v=0,memcpy
     (++*v            ,v[1],W),*v+=W,v[1]+=W,                1+main((v[1]
      !=v[2])                                            *--c,v)):(N=O
         ,compress(*v,&N,                    v[1],v[2]-v[1]),N):(f=
              fopen(v[1],"rb"))?fclose((n=fread(*v,1,O,f),f)),
                      n[*v]=0,n:(strcpy(*v,v[1]),0); }

