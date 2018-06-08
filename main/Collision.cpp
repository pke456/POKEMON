#include "stdafx.h"
#include "collision.h"

namespace Neptune_UTIL
{
	bool isCollisionReaction(const RECT& rcHold, RECT& rcMove)
	{
		//��Ʈ���� �浹������ �ȿ� �����Ǵ� ��Ʈ 
		RECT rcInter;

		//�浹���� �ʾҴٸ� ������ ���ʿ��ϴ�!
		if (!IntersectRect(&rcInter, &rcHold, &rcMove))
		{
			return false;
		}

		else
		{
			int interSectorW = rcInter.right - rcInter.left;
			int interSectorH = rcInter.bottom - rcInter.top;
			//�������� �ε����ٸ�~~~
			if (interSectorW > interSectorH)
			{
				//������ �ھ�����
				if (rcInter.top == rcHold.top)
				{
					OffsetRect(&rcMove, 0, -interSectorH);

					return true;
				}
				else if (rcInter.bottom == rcHold.bottom)//�Ʒ����� �ε����ٸ�
				{
					OffsetRect(&rcMove, 0, interSectorH);

					return true;
				}
			}
			else
			{
				//�����ʿ��� ���� ������
				if (rcInter.left == rcHold.left)
				{
					OffsetRect(&rcMove, -interSectorW, 0);

					return true;
				}
				else if (rcInter.right == rcHold.right)
				{
					OffsetRect(&rcMove, interSectorW, 0);

					return true;
				}
			}
			return false;
		}
	}

	bool isCollisionReactionNPC(const RECT & rcHold, RECT & rcMove)
	{
		//��Ʈ���� �浹������ �ȿ� �����Ǵ� ��Ʈ 
		RECT rcInter;

		//�浹���� �ʾҴٸ� ������ ���ʿ��ϴ�!
		if (!IntersectRect(&rcInter, &rcHold, &rcMove))
		{
			return false;
		}

		else
		{
			int interSectorW = rcInter.right - rcInter.left;
			int interSectorH = rcInter.bottom - rcInter.top;
			//�������� �ε����ٸ�~~~
			if (interSectorW > interSectorH)
			{
				//������ �ھ�����
				if (rcInter.top == rcHold.top)
				{
					return true;
				}
				else if (rcInter.bottom == rcHold.bottom)//�Ʒ����� �ε����ٸ�
				{
					return true;
				}
			}
			else
			{
				//�����ʿ��� ���� ������
				if (rcInter.left == rcHold.left)
				{
					return true;
				}
				else if (rcInter.right == rcHold.right)
				{
					return true;
				}
			}
			return false;
		}
	}
}