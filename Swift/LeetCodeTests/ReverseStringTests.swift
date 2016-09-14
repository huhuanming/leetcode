//
//  ReverseStringTests.swift
//  LeetCode
//
//  Created by 胡 桓铭 on 16/9/5.
//  Copyright © 2016年 胡 桓铭. All rights reserved.
//

import XCTest
@testable import LeetCode

class ReverseStringTests: XCTestCase {

    override func setUp() {
        super.setUp()
        // Put setup code here. This method is called before the invocation of each test method in the class.
    }
    
    override func tearDown() {
        // Put teardown code here. This method is called after the invocation of each test method in the class.
        super.tearDown()
    }

    func testExample() {
        XCTAssertEqual(LeetCode.reverse_string("hello!"), "!olleh")
    }

    func testPerformanceExample() {
        // This is an example of a performance test case.
        self.measureBlock {
            // Put the code you want to measure the time of here.
        }
    }

}
