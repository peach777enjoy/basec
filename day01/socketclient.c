
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

//�ͷ���Դ
int socketclient_destroy(void *handle)
{
	return 0;
}


namespace socketclient {
	//��ʼ������
	int socketclient_init(void **handle)
	{

	}

	//������Ϣ
	int soccketclient_send(void *handle, void *buf, int len)
	{

	}

	//������Ϣ
	int socketclient_recv(void *handle, void **buf, int *len)
	{

	}

	int sockclient_free(void **buf)
	{

	}

	//�ͷ���Դ
	int socketclient_destroy(void **handle)
	{

	}
}