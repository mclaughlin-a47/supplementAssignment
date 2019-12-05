//
//  supp_unit_test.cpp
//  
//
//  Created by Dr. Effirul I Ramlan on 17/11/2019.
//

#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include "UUDate.h"

int currentPoints = 0;
int maxPoints = 25;

TEST(UUDatesSuppTests, TestAddDaysNonLeap) {
    std::cout << "\nRunning test TestAddDaysNonLeap " << std::endl;
    
    //Arrange
    std::string expectedValue{"24/04/1999"};
    std::string actualValue{};
    UUDate defDate("10/04/1999");
    
    //Act
    CalculateDateFwd(defDate, 14);   // get date after two weeks
    actualValue = defDate.GetDate();
    
    //Assert
    EXPECT_EQ(expectedValue, actualValue);
    
    if (!HasFailure()) {
        //Test has passed
        currentPoints += 4;
        std::cout << "\n TestAddDaysNonLeap PASSED! : CalculateDateFwd is setting the right date " << std::endl;
        
    }
    else if (HasFailure()) {
        //Test failed - provide feedback
        std::cout << "\n TestAddDaysNonLeap FAILED : CalculateDateFwd is not adding the days argument correctly" << std::endl;
    }
    std::cout << "\nCurrent MARKS UUDatesSuppTests:" << currentPoints << "/" << maxPoints << std::endl;
}

TEST(UUDatesSuppTests, TestAddDaysLeap) {
    std::cout << "\nRunning test TestAddDaysLeap " << std::endl;
    
    //Arrange
    std::string expectedValue{"10/03/2008"};
    std::string actualValue{};
    UUDate defDate("18/02/2008");
    
    //Act
    CalculateDateFwd(defDate, 21);   // get date after three weeks
    actualValue = defDate.GetDate();
    
    //Assert
    EXPECT_EQ(expectedValue, actualValue);
    
    if (!HasFailure()) {
        //Test has passed
        currentPoints += 4;
        std::cout << "\n TestAddDaysLeap PASSED! : CalculateDateFwd is setting the right date " << std::endl;
        
    }
    else if (HasFailure()) {
        //Test failed - provide feedback
        std::cout << "\n TestAddDaysLeap FAILED : CalculateDateFwd is not adding the days argument correctly for leap year" << std::endl;
    }
    std::cout << "\nCurrent MARKS UUDatesSuppTests:" << currentPoints << "/" << maxPoints << std::endl;
}

TEST(UUDatesSuppTests, TestAddWorkingDays1) {
    std::cout << "\nRunning test TestAddWorkingDays1 " << std::endl;
    
    //Arrange
    std::string expectedValue{"12/09/1995"};
    std::string actualValue{};
    UUDate defDate("16/08/1995");
    
    //Act
    CalculateWorkingDateFwd(defDate, 18);   // get date after three weeks
    actualValue = defDate.GetDate();
    
    //Assert
    EXPECT_EQ(expectedValue, actualValue);
    
    if (!HasFailure()) {
        //Test has passed
        currentPoints += 4;
        std::cout << "\n TestAddWorkingDays1 PASSED! : CalculateWorkingDateFwd is setting the right date " << std::endl;
        
    }
    else if (HasFailure()) {
        //Test failed - provide feedback
        std::cout << "\n TestAddWorkingDays FAILED : CalculateWorkingDateFwd is not adding the days argument - Consider all bank holidays" << std::endl;
    }
    std::cout << "\nCurrent MARKS UUDatesSuppTests:" << currentPoints << "/" << maxPoints << std::endl;
}

TEST(UUDatesSuppTests, TestAddWorkingDays2) {
    std::cout << "\nRunning test TestAddWorkingDays2 " << std::endl;
    
    //Arrange
    std::string expectedValue{"04/05/2005"};
    std::string actualValue{};
    UUDate defDate("18/03/2005");
    
    //Act
    CalculateWorkingDateFwd(defDate, 30);   // get date after three weeks
    actualValue = defDate.GetDate();
    
    //Assert
    EXPECT_EQ(expectedValue, actualValue);
    
    if (!HasFailure()) {
        //Test has passed
        currentPoints += 4;
        std::cout << "\n TestAddWorkingDays2 PASSED! : CalculateWorkingDateFwd is setting the right date " << std::endl;
        
    }
    else if (HasFailure()) {
        //Test failed - provide feedback
        std::cout << "\n TestAddWorkingDays2 FAILED : CalculateWorkingDateFwd is not adding the days argument - Consider all bank holidays" << std::endl;
    }
    std::cout << "\nCurrent MARKS UUDatesSuppTests:" << currentPoints << "/" << maxPoints << std::endl;
}

TEST(UUDatesSuppTests, TestAddWorkingDays3) {
    std::cout << "\nRunning test TestAddWorkingDays3 " << std::endl;
    
    //Arrange
    std::string expectedValue{"15/01/2001"};
    std::string actualValue{};
    UUDate defDate("20/12/2000");
    
    //Act
    CalculateWorkingDateFwd(defDate, 15);   // get date after three weeks
    actualValue = defDate.GetDate();
    
    //Assert
    EXPECT_EQ(expectedValue, actualValue);
    
    if (!HasFailure()) {
        //Test has passed
        currentPoints += 4;
        std::cout << "\n TestAddWorkingDays3 PASSED! : CalculateWorkingDateFwd is setting the right date " << std::endl;
        
    }
    else if (HasFailure()) {
        //Test failed - provide feedback
        std::cout << "\n TestAddWorkingDays3 FAILED : CalculateWorkingDateFwd is not adding the days argument - Consider all bank holidays" << std::endl;
    }
    std::cout << "\nCurrent MARKS UUDatesSuppTests:" << currentPoints << "/" << maxPoints << std::endl;
}

TEST(UUDatesSuppTests, TestAddWorkingDays4) {
    std::cout << "\nRunning test TestAddWorkingDays4 " << std::endl;
    
    //Arrange
    std::string expectedValue{"19/03/2010"};
    std::string actualValue{};
    UUDate defDate("22/12/2009");
    
    //Act
    CalculateWorkingDateFwd(defDate, 60);   // get date after three weeks
    actualValue = defDate.GetDate();
    
    //Assert
    EXPECT_EQ(expectedValue, actualValue);
    
    if (!HasFailure()) {
        //Test has passed
        currentPoints += 4;
        std::cout << "\n TestAddWorkingDays4 PASSED! : CalculateWorkingDateFwd is setting the right date " << std::endl;
        
    }
    else if (HasFailure()) {
        //Test failed - provide feedback
        std::cout << "\n TestAddWorkingDays4 FAILED : CalculateWorkingDateFwd is not adding the days argument - Consider all bank holidays" << std::endl;
    }
    std::cout << "\nCurrent MARKS UUDatesSuppTests:" << currentPoints << "/" << maxPoints << std::endl;
    
    if (currentPoints == 24) {
        std::cout << "\nBonus MARKS UUDatesSuppTests:" << 1 << std::endl;
        std::cout << "FINAL MARKS UUDatesSuppTests:" << (currentPoints + 1) << "/" << maxPoints << std::endl << std::endl;
    }
}



