//����ͷ�ļ��ظ�
#pragma once


//����c++������
//�����c++����������c��׼����
#ifdef __cplusplus
extern "C"
{
#endif
	//��ʼ������
	int socketclient_init(void **handle);

	//������Ϣ
	int soccketclient_send(void *handle, void *buf, int len);

	//������Ϣ
	int socketclient_recv(void *handle, void *buf, int *len);

	//�ͷ���Դ
	int socketclient_destroy(void *handle);


	namespace socketclient {
		//��ʼ������
		int socketclient_init(void **handle);

		//������Ϣ
		int soccketclient_send(void *handle, void *buf, int len);

		//������Ϣ
		int socketclient_recv(void *handle, void **buf, int *len);

		int sockclient_free(void **buf);

		//�ͷ���Դ
		int socketclient_destroy(void **handle);
	}
#ifdef __cplusplus
}
#endif