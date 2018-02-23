/*
 * QuadEq.h

 *
 *  Created on: Oct 19, 2015
 *      Author: Erika
 */

#ifndef QUADEQ_H_
#define QUADEQ_H_

class QuadEq {
	private:
		double a;
		double b;
		double c;

		double root1;
		double root2;

	public:
		QuadEq(double a, double b, double c);

		void printEq() const;

		void solve();



};

#endif /* QUADEQ_H_ */
