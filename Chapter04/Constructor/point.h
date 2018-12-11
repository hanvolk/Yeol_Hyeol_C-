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
   Point(const int& xpos, const int& ypos);
   // Point Ŭ������ ������ - xpos�� ypos�� �Ű������� �ް� �ִ�.

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

