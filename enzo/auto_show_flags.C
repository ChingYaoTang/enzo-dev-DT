#include <stdio.h>
void auto_show_flags(FILE *fp) {
   fprintf (fp,"\n");
   fprintf (fp,"CPP = /lib/cpp\n");
   fprintf (fp,"CC  = /opt/cray/pe/craype/2.6.1/bin/cc\n");
   fprintf (fp,"CXX = /opt/cray/pe/craype/2.6.1/bin/CC\n");
   fprintf (fp,"FC  = /opt/cray/pe/craype/2.6.1/bin/ftn\n");
   fprintf (fp,"F90 = /opt/cray/pe/craype/2.6.1/bin/ftn\n");
   fprintf (fp,"LD  = /opt/cray/pe/craype/2.6.1/bin/CC\n");
   fprintf (fp,"\n");
   fprintf (fp,"DEFINES = -DXT3 -DSYSCALL -DH5_USE_16_API  -D__max_subgrids=100000 -D__max_baryons=30 -D__max_cpu_per_node=8 -D__memory_pool_size=100000 -DINITS64 -DLARGE_INTS -DCONFIG_PINT_8 -DIO_32    -DUSE_MPI   -DCONFIG_PFLOAT_8 -DCONFIG_BFLOAT_8  -DUSE_HDF5_GROUPS   -DTRANSFER   -DNEW_GRID_IO -DFAST_SIB      -DENZO_PERFORMANCE    -DSAB\n");
   fprintf (fp,"\n");
   fprintf (fp,"INCLUDES = -I/include -I/include          -I.\n");
   fprintf (fp,"\n");
   fprintf (fp,"CPPFLAGS = -P -traditional \n");
   fprintf (fp,"CFLAGS   =  -g\n");
   fprintf (fp,"CXXFLAGS =  -g\n");
   fprintf (fp,"FFLAGS   =  -g\n");
   fprintf (fp,"F90FLAGS =  -g\n");
   fprintf (fp,"LDFLAGS  = -Wl,-static -g\n");
   fprintf (fp,"\n");
   fprintf (fp,"LIBS     = -L/lib -lhdf5         \n");
   fprintf (fp,"\n");
}
