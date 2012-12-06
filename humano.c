//INFORMACIÓN

/*

# Most elementary use of C - Silver award

## Judges' comments:
### To build:

    make hamano

### To run:

    ./hamano < textfile > output.pdf

### Try:

    ./hamano < hint.text > hint.pdf

    # You can read output.pdf with PDF reader
    acroread hint.pdf
    # or
    evince hint.pdf

    # deobfuscate
    gcc -xc hint.pdf -o hint
    ./hint

    # Of course, You can obfuscate c code
    echo 'void main(){puts("Hello World!");}' | ./hamano > hello.pdf
    gcc -xc hello.pdf -o hello2
    ./hello2 | gcc -xc - -o ./hello3
    ./hello3

### Selected Judges Remarks:

This entry treads into a new territory for IOCCC - generating PDF files.

The originally submitted entry could have been thought of as a "Best abuse of
Ghostscript" winner.  :-)

The source code and rendered pages are obfuscated for humans (where
is the font?), and the submitted entry created PDF files that left Ghostscript
confused.

The results can be viewed with Acrobat Reader,
[evince](http://en.wikipedia.org/wiki/Evince) and Apple's Preview.

The updated version can also be viewed using Ghostscript.

There is something strange about the little flags in the output.
A search of English literature will provide a hint.  The conclusion
you might draw is too elementary.  :-)

So what do those flags really mean?

The [Dancing men algorithm][1] might be useful.

Don't forget to take a look at the generated PDF, perhaps you might even want
to compile the output with a C compiler.  When you run it, what does it
output?


## Author's comments:
This program obfuscate text file into PDF file with Dancing men
algorithm.

<http://en.wikipedia.org/wiki/The_Adventure_of_the_Dancing_Men>

Probably, the output PDF file is compliant with PDF 1.3. And also
available to compile as C code.

I've been tested with GCC 4.7 and Clang 3.0 on Linux, and following
PDF Reader:

 * Adobe Acrobat Reader
 * Evince
 * Ghostscript
 * Xpdf

### Obfuscations
This program is obfuscated by using classical methods.
But can you find out the embedded font from fragmented glyph?

--------------------------------------------------------------------------------
<!--
(c) Copyright 1984-2012, [Leo Broukhis, Simon Cooper, Landon Curt Noll][judges] - All rights reserved
This work is licensed under a [Creative Commons Attribution-ShareAlike 3.0 Unported License][cc].

*/





                          #define  \
                        D(s)"<<"#s">>"
                      #define  q(s)p(#s)
                     #define S " endobj "
                    #define Y "endstream"S
                    #include     <stdio.h>
                    #define  o(s) b[s]=_;\
                     p("%u    0  obj",s);
#define E for         (c=d;c  < 123;c++)
  #define DANCE         "trailer   "D\
    (/Root 3 0            R /Size %d)            "\nstartxref %u %%%%EOF\n*/"
      #define              p(s, ...)             _+=printf(s,  ##__VA_ARGS__)
       #define C         "<</Type/Page         /Parent %d %d R /Resources <<\
        /ProcSet[       /PDF/Text]/Font       <</U"D(/Subtype/Type1/BaseFont\
          /Courier) "  /T<</Subtype/Type3   /FontBBox[0 0 10 10]/FontMatrix[\
           %f 0 0 %f 0 0]/FirstChar %d/LastChar %d/Encoding<</Differences[%d"
            typedef int N;typedef char*Nyan;typedef char A;N a,b[64],d=65,_,v
              [32]={84,0,64,282,90,74,330,85,93,173,167,176,80,208,81,13,7,87
                ,160,346,32,128,170,218,16,26}; Nyan w[]={"+*-(,&-&","+*,&-&"
                  ,"+*.&/&","+*/*/+","+*())'('"  ,"+**&)&","+*(&'&","+*'*'+",
                    "","+,./","+,-,./","+--,+*"  ,"","+,(/","+,),(/","+-),+*"
                     ,"10 0 d0 ","8 7 2 2 re "   ,"+*+.'`'@'mi +/+/(mi"};Nyan
                       nyan(Nyan _,N y,A n){
                        N g=v[~-y%32];Nyan
                         s=w[g>>n&3|n*2];
                         for(a=0;*_=*s++;
                         a++,_++,*_++=32)
                         {*_+=*_-32?10:0;
                         if(a%2&&*_/16==3
                         ){if(g>>8)*_=105-*_;
                        _++;*_++=32;*_=~-a&&a-13
                        ?108:109;}}return n?n-9?nyan
                       (_,y,n-2):_:nyan(_+=~y&' '?sprintf
                      (_,17[w]):0,y,9);}N main(N c){A e[256];
                     p("/*%%PDF-1.3%%*/")-2;q(#include<stdio.h>\n);
                    q(#define o *_++&& *_-41\n#define);p(" endstream ");q
                   (main(){for(;*_++;      *_-40?:putchar(o?*_:o?10:41));\n)
                  ;q(#define  endobj          return 0;}\n);q(typedef int ET;/)
                 ;q(*);o(1)*b=~(p(D                 (/Length 2 0 R)"stream\n"))
                ;for(p("BT 12 818"                    " Td/%c 12 Tf 12 TL%%%c/"
               "static char*_=\""                       " \\\n",7[v],*v/2);c=
              getchar(),~c;c-10?                         p("/%c 12 Tf(\\%o)"
             "Tj",v[~-c%' '<25[                         v]&&!~-(~-c/'@')?0
            :7],c):(p("()'")))                         ;p("%%\";\nET ");*
           b-=~_;p(Y"/*");E{a                         =nyan(e+sprintf(e,
          16[w]),c,6)-e;o(c-                         59)p(D(/Length %d)
         "stream\n%s"Y,a,e)                         ;}o(2)p(" %u"S,*b);
        o(3)p(D(/Pages 4 0                         R)S);o(4)p(D(/Count
       1/MediaBox[0 0 595                         842]/Kids[5 0 R])S)
      ;o(5)p(C,4,0,6e-2,                         6e-2f,d,122,d);E p(
     "/%c",~-c/6+~14?c:                         d);q(]>>/CharProcs<<)
    ;E if(~-c/6+~14)p(                           "/%c %d 0 R",c,c+~58);
   for(q(>>/Widths[),                             c=59;--c;p(" 10"));a=p
  ("]>>>>>>/Contents 1                              0 R>>"S);for(p("xref\
 0 %d ",--d);c<d;p("%010u\
 %05d n  ",*(c+++b),NULL));
  return!(p(DANCE,d,a));}
