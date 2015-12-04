#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#include "fcntl.h"
int
main(int argc, char *argv[])
{
	int fd = open("foo1",O_CREATE|O_CHECKED|O_RDWR);
	char *buf = "checking";
	int res = write(fd,(void*)buf,8);
	printf(1,"res = %d\n",res );
	close(fd);

	int fd1 = open("foo1",O_RDONLY);
	char buf1[2048];
	int res2 = read(fd1,buf1,8);
	printf(1," res = %d readdata  = %s",res2,buf1 );

  exit();
}
