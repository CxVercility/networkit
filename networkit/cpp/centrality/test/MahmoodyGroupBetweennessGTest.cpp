/*
 * MahmoodyGroupBetweennessGTest.cpp
 *
 *  Created on:23.03.2018 
 *  Author:Marvin Pogoda 
 */

#include "MahmoodyGroupBetweennessGTest.h"
#include "../MahmoodyGroupBetweenness.h"
#include "../../auxiliary/Random.h"


namespace NetworKit {



TEST_F(MahmoodyGroupBetweennessGTest, testMahmoodyGroupBetweennessSmallGraph1) {

	Aux::Random::setSeed(2,false);

	Graph g(8,false,false);

	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 3);
	g.addEdge(2, 4);
	g.addEdge(3, 5);
	g.addEdge(4, 5);
	g.addEdge(5, 6);
	g.addEdge(5, 7);
	g.addEdge(0,5);

	MahmoodyGroupBetweenness gb(g,2,0.01);
	gb.run();
	

	EXPECT_EQ(gb.groupMaxBetweenness()[0],5);
	EXPECT_EQ(gb.groupMaxBetweenness()[1],2);

	




}


TEST_F(MahmoodyGroupBetweennessGTest, testMahmoodyGroupBetweennessSmallGraph2) {

	Aux::Random::setSeed(3,false);
	Graph g(9, false,false);
	g.addEdge(0,2);
	g.addEdge(0,3);
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(1,3);
	g.addEdge(1,5);
	g.addEdge(1,4);
	g.addEdge(2,3);
	g.addEdge(2,6);
	g.addEdge(2,5);
	g.addEdge(3,4);
	g.addEdge(3,6);
	g.addEdge(4,8);
	g.addEdge(4,5);
	g.addEdge(5,7);
	g.addEdge(5,6);
	g.addEdge(6,7);
	g.addEdge(7,8);




	MahmoodyGroupBetweenness gb(g,2,0.01);
	gb.run();

	EXPECT_EQ(gb.groupMaxBetweenness()[0],4);
	EXPECT_EQ(gb.groupMaxBetweenness()[1],6);


	





}




TEST_F(MahmoodyGroupBetweennessGTest, testMahmoodyGroupBetweennessSmallGraph3) {

	Aux::Random::setSeed(13,false);
	Graph g(10, false,false);
	g.addEdge(1,2);
	g.addEdge(1,3);
	g.addEdge(1,4);
	g.addEdge(1,5);
	g.addEdge(5,6);
	g.addEdge(5,7);
	g.addEdge(5,8);
	g.addEdge(5,9);
	g.addEdge(0,5);



	MahmoodyGroupBetweenness gb(g,2,0.01);
	gb.run();

	EXPECT_EQ(gb.groupMaxBetweenness()[0],5);
	EXPECT_EQ(gb.groupMaxBetweenness()[1],1);


	





}











} /* namespace NetworKit */
