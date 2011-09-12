#include <stdio.h>
#include <sys/utsname.h>

int main()
{
   struct utsname name;

   if(uname(&name) == -1)
      return -1;
   
   fputs(name.sysname, stdout);  putchar(' ');
   fputs(name.nodename, stdout); putchar(' ');
   fputs(name.release, stdout);  putchar(' ');
   fputs(name.version, stdout);  putchar(' ');
   fputs(name.machine, stdout);

   fputs("\n", stdout);
   return 0;
}

