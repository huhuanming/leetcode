//
//  ReverseWordsInAStringTests.swift
//  LeetCode
//
//  Created by 胡 桓铭 on 16/9/16.
//  Copyright © 2016年 胡 桓铭. All rights reserved.
//

import XCTest
@testable import LeetCode

class ReverseWordsInAStringTests: XCTestCase {

    override func setUp() {
        super.setUp()
        // Put setup code here. This method is called before the invocation of each test method in the class.
    }
    
    override func tearDown() {
        // Put teardown code here. This method is called after the invocation of each test method in the class.
        super.tearDown()
    }

    func testExample() {
        XCTAssertEqual(LeetCode.reverse_words_in_a_string(" the sky is blue "), "blue is sky the")
        XCTAssertEqual(LeetCode.reverse_words_in_a_string("the sky is blue"), "blue is sky the")
        XCTAssertEqual(LeetCode.reverse_words_in_a_string(" the sky     is blue "), "blue is sky the")
        XCTAssertEqual(LeetCode.reverse_words_in_a_string("pz! .xwy.,cga. vua frjrmcjf xxw'izz vgthvpfhl sldudifok wvls orujxroi w. oo c?ymxlptr ff'?rh bsjjoyjwvx tj pqv.zlq ,jlu',j dg izq.fo wtvwqn teual jnsv.a .oclyrvg tkgag'a' !wsz?sclc pvhl.ypq vyin cn?z,kxgu l?l glr zf'hew l'wmi .nlvgr u zfwzra? ot!emgg. rg,'.d.kp fn vat ba.myfqxe znzdrhh xjeubr taztndst v nep?bs .,pwin. e pi"), "pi e .,pwin. nep?bs v taztndst xjeubr znzdrhh ba.myfqxe vat fn rg,'.d.kp ot!emgg. zfwzra? u .nlvgr l'wmi zf'hew glr l?l cn?z,kxgu vyin pvhl.ypq !wsz?sclc tkgag'a' .oclyrvg jnsv.a teual wtvwqn izq.fo dg ,jlu',j pqv.zlq tj bsjjoyjwvx ff'?rh c?ymxlptr oo w. orujxroi wvls sldudifok vgthvpfhl xxw'izz frjrmcjf vua .xwy.,cga. pz!")
        XCTAssertEqual(LeetCode.reverse_words_in_a_string("a \nyqo! qjktum ym. .fumuhau"), ".fumuhau ym. qjktum \nyqo! a")
    }

    func testPerformanceExample() {
        // This is an example of a performance test case.
        self.measureBlock {
            XCTAssertEqual(LeetCode.reverse_words_in_a_string(" the sky is blue "), "blue is sky the")
        }
    }

}
