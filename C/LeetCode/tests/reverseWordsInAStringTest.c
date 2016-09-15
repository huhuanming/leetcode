//
//  reverseWordsInAStringTest.c
//  LeetCode
//
//  Created by 胡 桓铭 on 16/9/15.
//  Copyright © 2016年 胡 桓铭. All rights reserved.
//

#include "reverseWordsInAStringTest.h"

TEST reverseStringEuqalGivenString(void) {
    char *s = " the sky is blue ";
    reverseWords(s);
    ASSERT_STR_EQ("blue is sky the", s);
    
    s = "the sky is blue";
    reverseWords(s);
    ASSERT_STR_EQ("blue is sky the", s);

    s = " the sky     is blue ";
    reverseWords(s);
    ASSERT_STR_EQ("blue is sky the", s);
    
    s = "pz! .xwy.,cga. vua frjrmcjf xxw'izz vgthvpfhl sldudifok wvls orujxroi w. oo c?ymxlptr ff'?rh bsjjoyjwvx tj pqv.zlq ,jlu',j dg izq.fo wtvwqn teual jnsv.a .oclyrvg tkgag'a' !wsz?sclc pvhl.ypq vyin cn?z,kxgu l?l glr zf'hew l'wmi .nlvgr u zfwzra? ot!emgg. rg,'.d.kp fn vat ba.myfqxe znzdrhh xjeubr taztndst v nep?bs .,pwin. e pi";
    reverseWords(s);
    ASSERT_STR_EQ("pi e .,pwin. nep?bs v taztndst xjeubr znzdrhh ba.myfqxe vat fn rg,'.d.kp ot!emgg. zfwzra? u .nlvgr l'wmi zf'hew glr l?l cn?z,kxgu vyin pvhl.ypq !wsz?sclc tkgag'a' .oclyrvg jnsv.a teual wtvwqn izq.fo dg ,jlu',j pqv.zlq tj bsjjoyjwvx ff'?rh c?ymxlptr oo w. orujxroi wvls sldudifok vgthvpfhl xxw'izz frjrmcjf vua .xwy.,cga. pz!", s);
    
    s = "a \nyqo! qjktum ym. .fumuhau";
    reverseWords(s);
    ASSERT_STR_EQ(".fumuhau ym. qjktum \nyqo! a", s);
    PASS();
}

SUITE(reverseWordsInAStringTestSuite) {
    RUN_TEST(reverseStringEuqalGivenString);
}
