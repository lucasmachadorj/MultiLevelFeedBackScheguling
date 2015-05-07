#include "process.h"

Process::Process(){
	pid = 0;
	pBurstTime = 0;
	pRemainingBurstTime = 0;
	pWaitTime = 0;
	pIO = 0;
	finished = false;
}

void Process::setPID(int id){
	pid = id;
}

void Process::setPBurstTime(int burst){
	pBurstTime = burst;
	pRemainingBurstTime = burst;
}

void Process::setPIO(int io){
	pIO = io;
}

void Process::setAttributes(int pid, int pBurstTime, int pIO){
	setPID(pid);
	setPBurstTime(pBurstTime);
	setPIO(pIO);
}

void Process::setRemainingBurstTime(int remaining){
	pRemainingBurstTime = remaining;
}

void Process::setWaitingTime(int wait){
	pWaitTime = wait;
}


void Process::setIsFinished(){
	finished = true;
}

void Process::decreasePIO(){
	pIO--;
}

void Process::decreaseWaitingTime(){
	pWaitTime--;
}

int Process::getPID(){
	return pid;
}

int Process::getRemainingBurstTime(){
	return pBurstTime;
}

int Process::getPWaitingTime(){
    return pWaitTime;
}

bool Process::isFinished(){
    return finished;
}

