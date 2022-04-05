
#pragma once


int socketclient_init(void **handle) 
{
	return 0;
}

int soccketclient_send(void *handle, void *buf, int len)
{
	return 0;
}


int socketclient_recv(void *handle, void *buf, int *len)
{
	return 0;
}

//释放资源
int socketclient_destroy(void *handle)
{
	return 0;
}


namespace socketclient {
	//初始化环境
	int socketclient_init(void **handle)
	{

	}

	//发送消息
	int soccketclient_send(void *handle, void *buf, int len)
	{

	}

	//接收消息
	int socketclient_recv(void *handle, void **buf, int *len)
	{

	}

	int sockclient_free(void **buf)
	{

	}

	//释放资源
	int socketclient_destroy(void **handle)
	{

	}
}