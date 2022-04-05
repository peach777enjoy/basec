//避免头文件重复
#pragma once


//兼容c++编译器
//如果是c++编译器，按c标准编译
#ifdef __cplusplus
extern "C"
{
#endif
	//初始化环境
	int socketclient_init(void **handle);

	//发送消息
	int soccketclient_send(void *handle, void *buf, int len);

	//接收消息
	int socketclient_recv(void *handle, void *buf, int *len);

	//释放资源
	int socketclient_destroy(void *handle);


	namespace socketclient {
		//初始化环境
		int socketclient_init(void **handle);

		//发送消息
		int soccketclient_send(void *handle, void *buf, int len);

		//接收消息
		int socketclient_recv(void *handle, void **buf, int *len);

		int sockclient_free(void **buf);

		//释放资源
		int socketclient_destroy(void **handle);
	}
#ifdef __cplusplus
}
#endif