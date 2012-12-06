//INFORMACIÓN
/*

# Most surreptitious

## Judges' comments:
### To build:

    make nyaruko

### To run:

    ./nyaruko [seed.txt] < original.bin > output.c
    bash output.c > key.c
    perl output.c > data.c

    cat key.c data.c > output.c

    gcc output.c -o output
    ./output > regenerated.bin

### Try:

    echo "A quick brown fox jumps over the lazy dog" | ./nyaruko > output.c
    perl output.c > data.c
    gcc -o data data.c
    ./data
    gcc -o output output.c
    ./output


### Selected Judges Remarks:

The judges have nothing to add that has not already been written
about in the spoiler.html.gz file!  :-)

## Author's comments:
Usage
=====
Nyaruko is a binary to text filter.  Given some input on stdin,
Nyaruko will produce C code that reproduces this input on stdout:

    ./nyaruko < original.bin > output.c
    gcc output.c -o output
    ./output > regenerated.bin

Output is encrypted, but both key and data are included in the output.
To separate the key from the data, run these commands:

    bash output.c > key.c
    perl output.c > data.c

The key-less data.c still compiles, but produces a different message
on stdout instead of the original input.  This message is a hint to
why the code is formatted the way it is.

To combine the key and data, concatenate them together in either
order:

    cat key.c data.c > output.c
    cat data.c key.c > output.c

By default, Nyaruko generates a unique random key for every message,
using /dev/urandom as the seed.  If given an extra command line
argument, Nyaruko will seed using that file instead of /dev/urandom:

    ./nyaruko seed.txt < input.bin > output.c

This makes the output key deterministic, allowing the same key to be
shared across different files.  On operating systems that do not have
/dev/urandom, users should always specify this extra seed argument to
avoid deterministic keys.


Features
========
Implementation details that makes Nyaruko more obfuscated than usual
programs:

   * Nyaruko recycles variables and buffers to reduce internal state.
     The variable names are also carefully chosen for mixed-case
     madness.
   * Nyaruko employs some preprocessor magic to share much of the same
     code and state between the encoder and decoder, and to increase
     occurrences of smileys ;)

Output code has these features:

   * Fits nicely under 80 columns, and does not contain any trigraphs.
   * Uses a fairly efficient encoding scheme, better than uuencode for
     files larger than ~13K, and better than base64 for files larger
     than 20K.
   * Encryption with ISAAC, a cryptographically secure pseudorandom
     number generator.
   * Trivial 3 language polyglot.

Code layout is meant to resemble Nyaruko, also known as Nyarlathotep,
the Crawling Chaos.  The most obvious thing to do with chaos is to
make a random number generator, and the most obvious thing to do with
a random number generator is to make one-time-pads for encryption.


Compatibility
=============
Nyaruko has these environment dependencies:

   * Requires ASCII character set.
   * Assumes sizeof(unsigned int) == 4.
   * Best viewed with tab stops set to 8 spaces.

Output code has the same dependencies, with the additional
requirement that the compiler must support arbitrarily long string
literals.  Maximum input size that can be encoded while still
producing standard-compliant output is ~276 bytes for C89, and ~3168
bytes for C99.

Nyaruko has been to verified to work with these compiler/OS
combinations:

   * gcc 4.4.5 on Linux (32bit and 64bit)
   * clang 3.1 on Windows (Cygwin)
   * gcc 4.5.3 on Windows (Cygwin)
   * gcc 4.5.3 on Windows (MingW)
   * gcc 4.3.5 on JSLinux
   * tcc 0.9.25 on JSLinux

Note that on MingW, stdin and stdout are not opened in binary mode by
default, this means Nyaruko may not faithfully encode files on MingW.


Extra files
===========

spoiler.html.gz - Contains full recording of how the code went from
blank state to an obfuscated program, gzipped to fit under 1MB.

--------------------------------------------------------------------------------
<!--
(c) Copyright 1984-2012, [Leo Broukhis, Simon Cooper, Landon Curt Noll][judges] - All rights reserved
This work is licensed under a [Creative Commons Attribution-ShareAlike 3.0 Unported License][cc].


*/






                                                      #include<stdio.h>
                                                typedef unsigned int _;_ d,b,
                                           #define i(I1,Il,lI)if(Il){lI;}else{I1;}
                                         I[256],			n,y,a,r,u,k,o
                                       ,L,l[					256],O,K[
                                      /**/					    #define\
                                      q(g)						g char\
                                      *C,						   *Q,c[\
                                      ]=						      "KfW"\
                                      ""							"Ww|"\
                                       /*							   'UU!\
                                        %							     NYA!\
                                        */							       "Z}"\
                                 ";fRo?JtJaV<x4@*?R?&JV1"						 ".s"\
                             "{Fyj2_;khB1xQ5oxm~mS@B|(pa>oRU"						  "Ro"\
                          "nB}h@o?)d.X)NSTIUCz7@%",*s[]={c,"#en"					    "di"\
                       "f/*}||1;\n__DATA__\40*/\n\n#ifndef\40q\n#d"					     "ef"\
                      "ine\x20q\n#include<stdio.h>\ntypedef\40unsign"					       "e"\
                    "d\x20int\x20_;_\x20K[]={\n#include\40__FILE__\n#u"						"n"\
                   "def q","0},L,O,l[256],I[256],n,y,a,r,u,k,o;"#g"char"					 "*"\
                 "S,s[]=\"",c,c,"\";int main(){X();for(S=s+*K;*S>37;){for"					 "(o"\
                "=0;o<5;o++)r=r*85+(83+*S++)%89;r","^=*x();for(o=0;o<4;o++"					  ")"\
                "{s[O++]=r&255;r>>=8;}}return!fwrite(s,O-*S%5,1,stdout);}\n"					   "#"\
               "endif",c},S[256]="#ifdef/*\n'true'\40or\40q{\nexec\40head\40"					   "-"\
              "8\40$0\n};for(open$O,$0;<$O>;print\40if$f){$f|=/^$/;}q{*/q",/*					    */z;
              256];q(_*x(){if(!L--){y+=++a;for(o=0;o<256;y=l[o++]=I[255&(k>>10					    )]+u
              ){n^=(o&1)?n>>(( o& 2)?16:6):n<<((o&2)?2:13);u=I[o];k=I[o]=I[255&					    (u>>
             2)]+(n+=I[(o+128)  &   255]) +y;}L=255;}return&l[L];}_*X(){for(O=0					    ;256
            >O;I[O++]=0);for(O   =     0;   sizeof(K)/sizeof( _)> O;O++)I[O&255]				    ^=K[
            O];for(n=y=a=L=O=0 ;O<1<<24;++   O)x( );r=O=0x0; return&O;})int/*^^*/				    main
           (int p,char**P){FILE* Z=fopen(p>    (+  1)?P[01   ]   :"/dev/urandom",				    "rb"
          );i(;,Z,O=fread(K,256  ,4,Z);/*P          */     fclose(Z))X();for(p=b=d				    =O=
          0;O<256;K[O++]=0)*K=+  86;for(O                =1;12> O;K[O++]=*x());X();				    for
         (C=Q=S;r-8;){i(*C++=34,  (r-4&&r               -5)||C- S ,;)z=Q[p++];i(;,z				    !=
        32||r-3,i(i(C+=sprintf((    C),                 "%uU"    ",",K[b++]);i(d=1;C				   =S
       ;i(d=02,b-12,;),b%6,;),r-1                       ,i(b=   fread(c,1,4,stdin);i				   (p
       =O=0,b,for(d=O=0;O<04;O++)d                             +=(c[O]&255)<<(8*O);d				  ^=
      *x();for(p=5;p;c[--p]=O<32?O+                            95:O+6){O=d%85;d/=85;}				 O=
     5)i(d=0,b<4,c[O++]=b?b-1?b-2?36:      37:33:35           ;d=2)c[O]=0,r-4,i(i (d=				 2
    |d,C!=S+6,*C++=(*x()%34)+93;p--),r      -5,*s=          C;d|=2)  )),z ,i(*C++ =92				,
   z-63||C [-1]-63||C>S+76,;)*C++=z))i(                   ;,d>1,d=  d-2  ;Q=s[r]  ;i(			       ;
  ,r<3||  r>5,d=1;i(;,r-1, *C=0)C=S)  i(;,            r-4, p=0)++   r)   i(*(C++ )=
 34,r    <4||r>5||   C<S+    78,;)i       (*C++=0;d=1; C=S   ,r<3       ||       r>
5        ||C<S+     79,;      )i(;,d,                         puts               (
        S);         d=0      )}  return
                                      0;}
