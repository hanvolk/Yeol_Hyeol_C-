#ifndef __POINT_H_
#define __POINT_H_
 class Point
 {
  /*
    �ɹ� ���� x,y�� private�� ���� �ؼ�
    �ܺο��� ���� �Ҽ� ������ �ߴ�.
  */
 private:
    int x;
    int y;

 public:
    bool InitMembers(int xpos, int ypos);
    /* x�� y���� �ʱ�ȭ �� �Ű����� xpos, ypos�� ���� �޾Ƽ� ��ȿ�� �˻縦 ���� --> bool ��ȯ(true, false)
     �̻��� ������(true) Ŭ������ �ɹ����� x,y�� �ʱ�ȭ �Ѵ�. */

    int GetX() const;
    int GetY() const;
    /*
     �ɹ����� x,y �� ���� ��ȯ �� �ִ� Access Function ���
     const�� �ٿ��� �Լ� �������� �ɹ� ���� x, y�� ���� ���� ���ϰ� �Ͽ���. */

    bool SetX(int xpos);
    bool SetY(int ypos);

    /*
       �ɹ� ���� x, y�� ���� ���� �ʱ�ȭ �ϱ� ���� Access Function
        --> ��ȿ�� �˻� �� �Ŀ� bool ���� ��ȯ �Ѵ�.
    */
 };
#endif // __POINT_H__

