#ifndef PROCESS_H
#define PROCESS_H

#include<iostream>

using namespace std;

class Process {
private:
	int pid; // identificador do processo
	int pBurstTime; // surto de cpu de cada processo
	int pRemainingBurstTime;
	int pWaitTime; //tempo do processo na fila de espera aguardando término do surto de I/O
	int pIO; // quantidade de operações de entrada e saída do processo
	bool finished; //indica se o processo ja está concluído

	void setPID(int);
	void setPBurstTime(int);
	void setPIO(int);
public:
	Process();
	
	void setAttributes(int, int, int);
	void setRemainingBurstTime(int);
	void setIsFinished();
	void setWaitingTime(int);
	void decreasePIO();
	void decreaseWaitingTime();

	int getPID();
	int getRemainingBurstTime();
	int getPWaitingTime();

	bool isFinished();
};

#endif