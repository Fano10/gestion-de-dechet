#include"GenerateurSequenceOperations.h"


SequenceOperations* GenerateurSequenceOperations::genererSequence(int id, UsineTraitement* usineTraitement) {

	if (id == 1) {
		return genererSequence1(usineTraitement);
	}
	else {
		return genererSequence0(usineTraitement);
	}
}

SequenceOperations* GenerateurSequenceOperations::genererSequence1(UsineTraitement* usineTraitement) { //mety
	SequenceOperations* sequenceOperation = new SequenceOperations();

	Operation1* operation1 = new Operation1();
	Operation2* operation2 = new Operation2(operation1, new CreationDechetTraiteRecyclable(usineTraitement));
	sequenceOperation->definirOperationDemarrage(operation2);

	return sequenceOperation;
}

SequenceOperations* GenerateurSequenceOperations::genererSequence0(UsineTraitement* usineTraitement) {

	SequenceOperations* sequenceOperation = new SequenceOperations();

	CreationDechetTraiteCompostable* DTC = new CreationDechetTraiteCompostable(usineTraitement);
	CreationDechetTraiteNonRecyclable* DTNR = new CreationDechetTraiteNonRecyclable(usineTraitement);
	CreationDechetTraiteRecyclable* DTR = new CreationDechetTraiteRecyclable(usineTraitement);


	Operation6* operation6 = new Operation6(DTNR, DTR);
	Operation5* operation5 = new Operation5(DTC, DTNR);
	Operation4* operation4 = new Operation4(DTC, operation5);
	Operation3* operation3 = new Operation3(DTR, operation4);
	Operation2* operation2 = new Operation2(operation6, operation3);
	Operation1* operation1 = new Operation1(DTNR, operation2);


	sequenceOperation->ajouterOperation(operation1)
		->ajouterOperation(operation2)
		->ajouterOperation(operation3)
		->ajouterOperation(operation4)
		->ajouterOperation(operation5)
		->ajouterOperation(operation6)
		->ajouterOperation(DTC)
		->ajouterOperation(DTNR)
		->ajouterOperation(DTR)
		->definirOperationDemarrage(operation1);

	return sequenceOperation;

}