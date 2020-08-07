#include<iostream>
using namespace std;
int queen[9]={-1,-1,-1,-1,-1,-1,-1,-1,-1};
int count=0;
bool available(int pointi,int pointj){//�ж�ĳ���ʺ��Ƿ������лʺ��ͻ
	for(int i=1;i<pointi;i++){
		if(pointj==queen[i])return false;//ͬһ�оܾ�
		if((pointi-i)==(pointj-queen[i]))return false;//ͬһ���Խ��߾ܾ�
		if((pointi-i)+(pointj-queen[i])==0)return false;//ͬһ���Խ��߾ܾ�
	}
	return true;
}
void findSpace(int queenNumber){//�ڵ�queenNumber�����ܷŻʺ��λ��
	for(int i=1;i<9;i++){//��1~8������һ�еİ˸���λ
		if(available(queenNumber,i)){
//������Է����λ�þͼ�¼�µ�queenNumber���ʺ��λ��
			queen[queenNumber]=i;
			if(queenNumber==8){//����˸��ʺ󶼷�����ͳ��һ��
				count++;
				return;
			}
			int nextNumber=queenNumber+1;//���лʺ�û�ŵݹ����һ���ʺ�
			findSpace(nextNumber);
		}
	}
	queen[--queenNumber]=-1;//�����һ��û�пɷŵ�λ��˵����һ�лʺ�ŵ�λ�ò��У�ҪΪ��һ���ʺ�Ѱ���µĿɷ�λ��
	return;
}
int main(){
	findSpace(1);//�ӣ�1��1����ʼ�ݹ�����
	cout<<count<<endl;
	return 0;
}
