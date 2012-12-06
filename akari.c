//INFORMACIÓN

/*

# Best of Show - Most Shrinkable

## Judges' comments:
### To build:

    make akari

### To run:

    ./akari [input_file_or_- [output_file_or_- [even]]]

### Try:

    ./akari < example.ppm > odd_output.ppm
    ./akari - - even < example.ppm > even_output.ppm
    ./akari example.ppm odd_output.ppm

    make akari2.c
    cat akari2.c

    make akari2

    ./akari2 < akari2.c
    ./akari2 rot13 < akari2.c

    make akari3.c
    cat akari3.c

    make akari3

    ./akari3

    make akari4.c
    cat akari4.c

    ./akari4

### Selected Judges Remarks:

Akari is an image downsampling utility that accepts 3 inout formats:

    * PGM (netpbm grayscale image).  Akari only accept PGM files with this
      header: P5 <width> <height> 255.  Images with extra comments such as
      the ones produced by GIMP will not be parsed properly.

    * PPM (netpbm RGB image).  Only PPM files with this header are
      accepted: P6 <width> <height> 255.

    * ASCII art (with end of lines in LF bytes only, not CR-LF)

Anything that is not parseable as PGM or PPM will be downsampled as ASCII art.

## Author's comments:
Akari is an image downsampling utility.  She accepts up to 3 arguments:

First argument is the input image.  If it's "-" or unspecified, Akari
will read from stdin.

Second argument is the output image.  If it's "-" or unspecified,
Akari will write to stdout.

Third argument, if specified, causes Akari to keep even pixels on even
scanlines.  By default Akari will keep odd pixels on odd scanlines.

Examples:

    gcc akari.c -o akari
    ./akari < example.ppm > odd_output.ppm
    ./akari - - even < example.ppm > even_output.ppm
    ./akari example.ppm odd_output.ppm

Akari accepts 3 input formats:
* PGM (netpbm grayscale image).  Akari only accept PGM files with this
  header: P5 <width> <height> 255.  Images with extra comments such as
  the ones produced by GIMP will not be parsed properly.
* PPM (netpbm RGB image).  Only PPM files with this header are
  accepted: P6 <width> <height> 255.
* ASCII art (with end of lines in LF bytes only, not CR-LF)

This is useful for decoding some curiously interlaced images, such as
the included example.ppm

Anything that is not parseable as PGM or PPM will be downsampled as
ASCII art.  Since the source code is formatted as ASCII art, it's only
natural to try:

    ./akari akari.c akari2.c

akari2.c is also a valid C program, and accepts up to 1 argument.
By default, this second program reads text from stdin and writes
expanded output to stdout.  If the extra argument is specified, the
output text will also pass through a rot13 filter.

    gcc akari2.c -o akari2
    ./akari2 < input.txt > expanded_output.txt
    ./akari2 rot13 < input.txt > expanded_and_rot13_output.txt

You can combine the two programs together to have just a regular rot13
filter:

    ./akari2 rot13 < input.txt | ./akari > rot13.txt

Of course, we wouldn't stop with just 2 programs, you can downsample
the source *again* and get yet another C program:

    ./akari < akari.c | ./akari > akari3.c

We must go deeper:

    ./akari < akari.c | ./akari | ./akari > akari4.c

akari3.c and akari4.c are still (mostly valid) C programs.
"gcc -Wall" will output a few warnings, but still produce output
executables.  The output executables each print a message to stdout.

It takes quite a bit of skill and obfuscation to interleave a
C program 4 levels deep, it's much easier to interleave something like
a brainf#$% program in a C program, for example.  For comparison, a
brainf#$% program is embedded inside akari.c

--------------------------------------------------------------------------------
<!--
(c) Copyright 1984-2012, [Leo Broukhis, Simon Cooper, Landon Curt Noll][judges] - All rights reserved
This work is licensed under a [Creative Commons Attribution-ShareAlike 3.0 Unported License][cc].

*/





                                       /*
                                      +
                                     +
                                    +
                                    +
                                    [         >i>n[t
                                     */   #include<stdio.h>
                        /*2w0,1m2,]_<n+a m+o>r>i>=>(['0n1'0)1;
                     */int/**/main(int/**/n,char**m){FILE*p,*q;int        A,k,a,r,i/*
                   #uinndcelfu_dset<rsitcdti_oa.nhs>i/_*/;char*d="P%"   "d\n%d\40%d"/**/
                 "\n%d\n\00wb+",b[1024],y[]="yuriyurarararayuruyuri*daijiken**akkari~n**"
          "/y*u*k/riin<ty(uyr)g,aur,arr[a1r2a82*y2*/u*r{uyu}riOcyurhiyua**rrar+*arayra*="
       "yuruyurwiyuriyurara'rariayuruyuriyuriyu>rarararayuruy9uriyu3riyurar_aBrMaPrOaWy^?"
      "*]/f]`;hvroai<dp/f*i*s/<ii(f)a{tpguat<cahfaurh(+uf)a;f}vivn+tf/g*`*w/jmaa+i`ni("/**
     */"i+k[>+b+i>++b++>l[rb";int/**/u;for(i=0;i<101;i++)y[i*2]^="~hktrvg~dmG*eoa+%squ#l2"
     ":(wn\"1l))v?wM353{/Y;lgcGp`vedllwudvOK`cct~[|ju {stkjalor(stwvne\"gt\"yogYURUYURI"[
     i]^y[i*2+1]^4;/*!*/p=(n>1&&(m[1][0]-'-'||m[1][1]  !='\0'))?fopen(m[1],y+298):stdin;
      /*y/riynrt~(^w^)],]c+h+a+r+*+*[n>)+{>f+o<r<(-m]    =<2<5<64;}-]-(m+;yry[rm*])/[*
       */q=(n<3||!(m[2][0]-'-'||m[2][1]))?stdout /*]{     }[*/:fopen(m[2],d+14);if(!p||/*
       "]<<*-]>y++>u>>+r >+u+++y>--u---r>++i+++"  <)<      ;[>-m-.>a-.-i.++n.>[(w)*/!q/**/)
    return+printf("Can "  "not\x20open\40%s\40"    ""       "for\40%sing\n",m[!p?1:2],!p?/*
  o=82]5<<+(+3+1+&.(+  m  +-+1.)<)<|<|.6>4>-+(>    m-        &-1.9-2-)-|-|.28>-w-?-m.:>([28+
 */"read":"writ");for  (   a=k=u= 0;y[u];  u=2    +u){y[k++   ]=y[u];}if((a=fread(b,1,1024/*
,mY/R*Y"R*/,p/*U*/)/*          R*/ )>/*U{  */   2&& b/*Y*/[0]/*U*/=='P' &&4==/*"y*r/y)r\}
*/sscanf(b,d,&k,& A,&           i,  &r)&&        !   (k-6&&k -5)&&r==255){u=A;if(n>3){/*
]&<1<6<?<m.-+1>3> +:+ .1>3+++     .   -m-)      -;.u+=++.1<0< <; f<o<r<(.;<([m(=)/8*/
u++;i++;}fprintf   (q,    d,k,           u      >>1,i>>1,r);u  = k-5?8:4;k=3;}else
  /*]>*/{(u)=/*{   p> >u  >t>-]s                >++(.yryr*/+(    n+14>17)?8/4:8*5/
     4;}for(r=i=0  ;  ;){u*=6;u+=                (n>3?1:0);if    (y[u]&01)fputc(/*
      <g-e<t.c>h.a r  -(-).)8+<1.                 >;+i.(<)<     <)+{+i.f>([180*/1*
      (r),q);if(y[u   ]&16)k=A;if                               (y[u]&2)k--;if(i/*
      ("^w^NAMORI; {   I*/==a/*"                               )*/){/**/i=a=(u)*11
       &255;if(1&&0>=     (a=                                 fread(b,1,1024,p))&&
        ")]i>(w)-;} {                                         /i-f-(-m--M1-0.)<{"
         [ 8]==59/* */                                       )break;i=0;}r=b[i++]
            ;u+=(/**>>                                     *..</<<<)<[[;]**/+8&*
            (y+u))?(10-              r?4:2):(y[u]         &4)?(k?2:4):2;u=y[u/*
             49;7i\(w)/;}             y}ru\=*ri[        ,mc]o;n}trientuu ren (
             */]-(int)'`';}             fclose(          p);k= +fclose( q);
              /*] <*.na/m*o{ri{                       d;^w^;}  }^_^}}
               "   */   return  k-                -1+   /*\'   '-`*/
                     (   -/*}/   */0x01        );       {;{    }}
                            ;           /*^w^*/        ;}
