/*�e�m�B�z��*/
#include <stdio.h> //�ޥΨ禡�w�A�N�O�@��O�H�w�g�g�n���\��
#include <stdlib.h>
#define homework "�Ĥ@���@�~" //�w�q�r��

/*�����ܼƫŧi��*/
char *student;              //�ŧi�r�������ܼ�
char content[] = "�j�a�n�A�ڬO�j�@��ިt�����~�t�A�{�b��b�s���հϱJ�١C�ڳ��w��nba���ɡA���M�ڤ��`���x�y�A�]���|���A���o����ê�ڪY��o�˪����ɡC�ڸg�`�q�����W�l���s�����ѡA�R��ۧڪ��{���C�ڤ]�g�`�|�ݰ�ڷs�D�A�קK�u�F�Ѩ�@������T�Ӧ��[���W���~�ѡA�ҥH���ɭԥi�H��ֻP�@�ɱ��y�C\n";  //�ŧi�r���}�C(���ŧi�j�p)�õ���
char reason[301] = "�ڷ|��ܸ�ިt�D�n�٬O����ɦV�A�]����G���ɭԦ�����Ĳ���T�A���Ʊ榳��i�@�B���F�ѡC���M���N���T�u�{�A���O�]�����z�ƾǦ۱q��T����N�Ϥ��Ӧ^�ӡA�ҥH��ܻݭn�ݤ�������T�޲z�t�C";  //�ŧi�r���}�C(���ŧi�j�p)�õ���

/*�{���_�l�����*/
int main(int argc, char *argv[])
{
  /*��ưϰ��ܼƫŧi��*/
  int year = 101;            //�ŧi����ܼƨõ���
  float ver = 1.1;           //�ŧi�B�I���ܼƨõ���

  /*�{�����椺�e*/
  if (argc == 4)
  {
    student = argv[1];    //�����ܼƫ��V�Ӧr��_�l��m
    year = atoi(argv[2]); //�r������
    ver = atof(argv[3]);  //�r����B�I��
  }
  else
  {
    fprintf(stderr, "Number of parameters is incorrect\n");
    //stderr �P stdout �y�����P
    exit(1);  //�����{���N����1�ȶǦ^���@�~�t��
  }
  printf("�ڬO�Ťj��޲�%-5d��\t", year);
  printf("%s %s\t���� {%4.4f}\n\n", student, homework, ver);
  printf("\\�ۧڤ���\\\n%s\n", content);
  printf("\"Ū��ިt���ت�\"\n%s\n",reason);
}
