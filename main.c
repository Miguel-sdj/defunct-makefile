#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <pthread.h>

void* printar_ps()
{
	int timer;

	sleep(1);
	printf("Esperando 10 segundos\n");
	for (timer = 5; timer > 0; timer--) {

		printf("Tempo restante = %d segundos\n", timer*2);
		printf("----------------------------/----------------------------/----------------------------\n");
		system("ps -l |grep 'Z'");
		printf("----------------------------/----------------------------/----------------------------\n");
		sleep(2);
		printf("\n\n");

	}

	return 0;
}

void* zombie_maker()
{
	pid_t p;

	p = fork();

	if (p == 0) {
		printf("\n\nPID DO DEFUNTO =  %d\n", getpid());
		printf("PID DO PAI = %d\n\n", getppid());

	} else {
		// espera 11 segundos pra comprovar que o filho virou zumbi
		sleep(11);
		printf("\n\nPID %d foi comprovado zumbi\n", p);
	}

	return 0;

}

int main()
{
    pthread_t thread1, thread2;

    pthread_create(&thread1, NULL, printar_ps, 0);
    pthread_create(&thread2, NULL, zombie_maker, 0);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    return 0;
}
