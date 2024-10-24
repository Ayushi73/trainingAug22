/***************************************************************************
*	FILENAME :TCPserver.c
*	DESCRIPTION:Contains Code for a  server,that will accept 
*       a string from a client process , prints the string and the 
*	IP Address of the client .(Shows a typical ITERATIVE SERVER )
*	Invoke the Executable as a.out PortNo  
****************************************************************************/


#include	<stdio.h>
#include	<stdlib.h>
#include	<errno.h>
#include	<string.h>
#include	<sys/types.h>
#include	<sys/socket.h>
#include	<netinet/in.h>
#include	<arpa/inet.h>
#include	<sys/wait.h>
#include	<fcntl.h>
#include	<unistd.h>

#define MYPORT 16699/*The port users will be connecting to*/

void readstring(int,char *);

int main(int C, char *V[] )
{
	int	listensocket,connectionsocket;
	struct	sockaddr_in
		serveraddress,cliaddr;
	int binderror;
	socklen_t len;
	char buf[100],databuf[1024];

	listensocket = socket(AF_INET, SOCK_STREAM, 0 );/*it creates an unnamed socket inside the kernel and returns an integer known as socket descriptor */
	if (listensocket < 0 ) 
	{
		perror("socket" );
		exit(1 );
	}

	memset(&serveraddress, 0, sizeof(serveraddress) );
	serveraddress.sin_family = AF_INET;/*code for address family.Internet family of IPv4 addresses */
	serveraddress.sin_port = htons(MYPORT);/*PORT NO on which server will listen for incoming connections*/
	serveraddress.sin_addr.s_addr = htonl(INADDR_ANY);/*IP ADDRESS of the host.For server ,it will be server IP address ie on which machine it is running*/

	binderror=bind(listensocket,(struct sockaddr*)&serveraddress,
		sizeof(serveraddress));/* Binds to the address of the current host and port no on which the server will run and will listen to client request */
	if (-1 == binderror)
	{
			perror("BIND !!!!!!!");
			exit(1);
	}
	listen(listensocket,5); /*It allows the process to listen on the socket for connection.Second argument '5' specifies maximum no of client connections that server will queue for this listening socket */
	
	/*Beginning of the Main Server Processing Loop*/
	
	for (;;) //infinite loop
	{
		printf("\n\nServer:I am waiting-----Start of Main Loop\n");
		
		len=sizeof(cliaddr);
		connectionsocket=accept(listensocket,
					(struct sockaddr*)&cliaddr,&len);/*Blocks the process until a client connects to the server ie TCP three way handshake is complete*/
		if (connectionsocket < 0)
		{
			if (errno == EINTR)
			printf("Interrupted system call ??");
			continue;
		}
		printf("Connection from %s\n",
			inet_ntop(AF_INET,&cliaddr.sin_addr,buf,sizeof(buf)));
		readstring(connectionsocket , databuf);/* read the string */ 
		printf("Finished Serving One Client\n");
close(connectionsocket);	
}
close(listensocket);	
}

/********************************************************************
*	FUNCTION NAME:readstring
*	DESCRIPTION: Reads the string  sent by the client over the 
*	socket	and stores it in the array fname .
*	NOTES : No Error Checking is done .
*	RETURNS :void 
*********************************************************************/

void readstring(
	int connectionsocket,		/*Socket Descriptor*/	 
	char *fname)	/*Array , to be populated by the string from client*/
/********************************************************************/
{	
	int pointer=0,n;
	while ((n=read(connectionsocket,(fname + pointer),1024))>0)
	{
		pointer=pointer+n;
	}/* read() will read either the total no of bytes in the socket or 1024 */
	fname[pointer]='\0';
	printf("Server :Received   %s\n " ,fname);

}
/**********************************************************************/
