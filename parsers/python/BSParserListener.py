# Generated from /Users/lucyann/Documents/code/BioScriptGrammar/grammar/BSParser.g4 by ANTLR 4.9.1
from antlr4 import *
if __name__ is not None and "." in __name__:
    from .BSParser import BSParser
else:
    from BSParser import BSParser
/* parser/listener/visitor header section */

# This class defines a complete listener for a parse tree produced by BSParser.
class BSParserListener(ParseTreeListener):

    # Enter a parse tree produced by BSParser#program.
    def enterProgram(self, ctx:BSParser.ProgramContext):
        pass

    # Exit a parse tree produced by BSParser#program.
    def exitProgram(self, ctx:BSParser.ProgramContext):
        pass


    # Enter a parse tree produced by BSParser#globalDeclarations.
    def enterGlobalDeclarations(self, ctx:BSParser.GlobalDeclarationsContext):
        pass

    # Exit a parse tree produced by BSParser#globalDeclarations.
    def exitGlobalDeclarations(self, ctx:BSParser.GlobalDeclarationsContext):
        pass


    # Enter a parse tree produced by BSParser#moduleDeclaration.
    def enterModuleDeclaration(self, ctx:BSParser.ModuleDeclarationContext):
        pass

    # Exit a parse tree produced by BSParser#moduleDeclaration.
    def exitModuleDeclaration(self, ctx:BSParser.ModuleDeclarationContext):
        pass


    # Enter a parse tree produced by BSParser#manifestDeclaration.
    def enterManifestDeclaration(self, ctx:BSParser.ManifestDeclarationContext):
        pass

    # Exit a parse tree produced by BSParser#manifestDeclaration.
    def exitManifestDeclaration(self, ctx:BSParser.ManifestDeclarationContext):
        pass


    # Enter a parse tree produced by BSParser#stationaryDeclaration.
    def enterStationaryDeclaration(self, ctx:BSParser.StationaryDeclarationContext):
        pass

    # Exit a parse tree produced by BSParser#stationaryDeclaration.
    def exitStationaryDeclaration(self, ctx:BSParser.StationaryDeclarationContext):
        pass


    # Enter a parse tree produced by BSParser#functions.
    def enterFunctions(self, ctx:BSParser.FunctionsContext):
        pass

    # Exit a parse tree produced by BSParser#functions.
    def exitFunctions(self, ctx:BSParser.FunctionsContext):
        pass


    # Enter a parse tree produced by BSParser#functionDeclaration.
    def enterFunctionDeclaration(self, ctx:BSParser.FunctionDeclarationContext):
        pass

    # Exit a parse tree produced by BSParser#functionDeclaration.
    def exitFunctionDeclaration(self, ctx:BSParser.FunctionDeclarationContext):
        pass


    # Enter a parse tree produced by BSParser#formalParameters.
    def enterFormalParameters(self, ctx:BSParser.FormalParametersContext):
        pass

    # Exit a parse tree produced by BSParser#formalParameters.
    def exitFormalParameters(self, ctx:BSParser.FormalParametersContext):
        pass


    # Enter a parse tree produced by BSParser#formalParameterList.
    def enterFormalParameterList(self, ctx:BSParser.FormalParameterListContext):
        pass

    # Exit a parse tree produced by BSParser#formalParameterList.
    def exitFormalParameterList(self, ctx:BSParser.FormalParameterListContext):
        pass


    # Enter a parse tree produced by BSParser#formalParameter.
    def enterFormalParameter(self, ctx:BSParser.FormalParameterContext):
        pass

    # Exit a parse tree produced by BSParser#formalParameter.
    def exitFormalParameter(self, ctx:BSParser.FormalParameterContext):
        pass


    # Enter a parse tree produced by BSParser#functionTyping.
    def enterFunctionTyping(self, ctx:BSParser.FunctionTypingContext):
        pass

    # Exit a parse tree produced by BSParser#functionTyping.
    def exitFunctionTyping(self, ctx:BSParser.FunctionTypingContext):
        pass


    # Enter a parse tree produced by BSParser#returnStatement.
    def enterReturnStatement(self, ctx:BSParser.ReturnStatementContext):
        pass

    # Exit a parse tree produced by BSParser#returnStatement.
    def exitReturnStatement(self, ctx:BSParser.ReturnStatementContext):
        pass


    # Enter a parse tree produced by BSParser#blockStatement.
    def enterBlockStatement(self, ctx:BSParser.BlockStatementContext):
        pass

    # Exit a parse tree produced by BSParser#blockStatement.
    def exitBlockStatement(self, ctx:BSParser.BlockStatementContext):
        pass


    # Enter a parse tree produced by BSParser#statements.
    def enterStatements(self, ctx:BSParser.StatementsContext):
        pass

    # Exit a parse tree produced by BSParser#statements.
    def exitStatements(self, ctx:BSParser.StatementsContext):
        pass


    # Enter a parse tree produced by BSParser#ifStatement.
    def enterIfStatement(self, ctx:BSParser.IfStatementContext):
        pass

    # Exit a parse tree produced by BSParser#ifStatement.
    def exitIfStatement(self, ctx:BSParser.IfStatementContext):
        pass


    # Enter a parse tree produced by BSParser#whileStatement.
    def enterWhileStatement(self, ctx:BSParser.WhileStatementContext):
        pass

    # Exit a parse tree produced by BSParser#whileStatement.
    def exitWhileStatement(self, ctx:BSParser.WhileStatementContext):
        pass


    # Enter a parse tree produced by BSParser#repeat.
    def enterRepeat(self, ctx:BSParser.RepeatContext):
        pass

    # Exit a parse tree produced by BSParser#repeat.
    def exitRepeat(self, ctx:BSParser.RepeatContext):
        pass


    # Enter a parse tree produced by BSParser#heat.
    def enterHeat(self, ctx:BSParser.HeatContext):
        pass

    # Exit a parse tree produced by BSParser#heat.
    def exitHeat(self, ctx:BSParser.HeatContext):
        pass


    # Enter a parse tree produced by BSParser#dispose.
    def enterDispose(self, ctx:BSParser.DisposeContext):
        pass

    # Exit a parse tree produced by BSParser#dispose.
    def exitDispose(self, ctx:BSParser.DisposeContext):
        pass


    # Enter a parse tree produced by BSParser#mix.
    def enterMix(self, ctx:BSParser.MixContext):
        pass

    # Exit a parse tree produced by BSParser#mix.
    def exitMix(self, ctx:BSParser.MixContext):
        pass


    # Enter a parse tree produced by BSParser#usein.
    def enterUsein(self, ctx:BSParser.UseinContext):
        pass

    # Exit a parse tree produced by BSParser#usein.
    def exitUsein(self, ctx:BSParser.UseinContext):
        pass


    # Enter a parse tree produced by BSParser#useinType.
    def enterUseinType(self, ctx:BSParser.UseinTypeContext):
        pass

    # Exit a parse tree produced by BSParser#useinType.
    def exitUseinType(self, ctx:BSParser.UseinTypeContext):
        pass


    # Enter a parse tree produced by BSParser#capture.
    def enterCapture(self, ctx:BSParser.CaptureContext):
        pass

    # Exit a parse tree produced by BSParser#capture.
    def exitCapture(self, ctx:BSParser.CaptureContext):
        pass


    # Enter a parse tree produced by BSParser#resuspend.
    def enterResuspend(self, ctx:BSParser.ResuspendContext):
        pass

    # Exit a parse tree produced by BSParser#resuspend.
    def exitResuspend(self, ctx:BSParser.ResuspendContext):
        pass


    # Enter a parse tree produced by BSParser#wash.
    def enterWash(self, ctx:BSParser.WashContext):
        pass

    # Exit a parse tree produced by BSParser#wash.
    def exitWash(self, ctx:BSParser.WashContext):
        pass


    # Enter a parse tree produced by BSParser#detect.
    def enterDetect(self, ctx:BSParser.DetectContext):
        pass

    # Exit a parse tree produced by BSParser#detect.
    def exitDetect(self, ctx:BSParser.DetectContext):
        pass


    # Enter a parse tree produced by BSParser#split.
    def enterSplit(self, ctx:BSParser.SplitContext):
        pass

    # Exit a parse tree produced by BSParser#split.
    def exitSplit(self, ctx:BSParser.SplitContext):
        pass


    # Enter a parse tree produced by BSParser#dispense.
    def enterDispense(self, ctx:BSParser.DispenseContext):
        pass

    # Exit a parse tree produced by BSParser#dispense.
    def exitDispense(self, ctx:BSParser.DispenseContext):
        pass


    # Enter a parse tree produced by BSParser#gradient.
    def enterGradient(self, ctx:BSParser.GradientContext):
        pass

    # Exit a parse tree produced by BSParser#gradient.
    def exitGradient(self, ctx:BSParser.GradientContext):
        pass


    # Enter a parse tree produced by BSParser#store.
    def enterStore(self, ctx:BSParser.StoreContext):
        pass

    # Exit a parse tree produced by BSParser#store.
    def exitStore(self, ctx:BSParser.StoreContext):
        pass


    # Enter a parse tree produced by BSParser#numberAssignment.
    def enterNumberAssignment(self, ctx:BSParser.NumberAssignmentContext):
        pass

    # Exit a parse tree produced by BSParser#numberAssignment.
    def exitNumberAssignment(self, ctx:BSParser.NumberAssignmentContext):
        pass


    # Enter a parse tree produced by BSParser#math.
    def enterMath(self, ctx:BSParser.MathContext):
        pass

    # Exit a parse tree produced by BSParser#math.
    def exitMath(self, ctx:BSParser.MathContext):
        pass


    # Enter a parse tree produced by BSParser#binops.
    def enterBinops(self, ctx:BSParser.BinopsContext):
        pass

    # Exit a parse tree produced by BSParser#binops.
    def exitBinops(self, ctx:BSParser.BinopsContext):
        pass


    # Enter a parse tree produced by BSParser#parExpression.
    def enterParExpression(self, ctx:BSParser.ParExpressionContext):
        pass

    # Exit a parse tree produced by BSParser#parExpression.
    def exitParExpression(self, ctx:BSParser.ParExpressionContext):
        pass


    # Enter a parse tree produced by BSParser#methodInvocation.
    def enterMethodInvocation(self, ctx:BSParser.MethodInvocationContext):
        pass

    # Exit a parse tree produced by BSParser#methodInvocation.
    def exitMethodInvocation(self, ctx:BSParser.MethodInvocationContext):
        pass


    # Enter a parse tree produced by BSParser#methodCall.
    def enterMethodCall(self, ctx:BSParser.MethodCallContext):
        pass

    # Exit a parse tree produced by BSParser#methodCall.
    def exitMethodCall(self, ctx:BSParser.MethodCallContext):
        pass


    # Enter a parse tree produced by BSParser#expressionList.
    def enterExpressionList(self, ctx:BSParser.ExpressionListContext):
        pass

    # Exit a parse tree produced by BSParser#expressionList.
    def exitExpressionList(self, ctx:BSParser.ExpressionListContext):
        pass


    # Enter a parse tree produced by BSParser#typeType.
    def enterTypeType(self, ctx:BSParser.TypeTypeContext):
        pass

    # Exit a parse tree produced by BSParser#typeType.
    def exitTypeType(self, ctx:BSParser.TypeTypeContext):
        pass


    # Enter a parse tree produced by BSParser#unionType.
    def enterUnionType(self, ctx:BSParser.UnionTypeContext):
        pass

    # Exit a parse tree produced by BSParser#unionType.
    def exitUnionType(self, ctx:BSParser.UnionTypeContext):
        pass


    # Enter a parse tree produced by BSParser#typesList.
    def enterTypesList(self, ctx:BSParser.TypesListContext):
        pass

    # Exit a parse tree produced by BSParser#typesList.
    def exitTypesList(self, ctx:BSParser.TypesListContext):
        pass


    # Enter a parse tree produced by BSParser#variableDefinition.
    def enterVariableDefinition(self, ctx:BSParser.VariableDefinitionContext):
        pass

    # Exit a parse tree produced by BSParser#variableDefinition.
    def exitVariableDefinition(self, ctx:BSParser.VariableDefinitionContext):
        pass


    # Enter a parse tree produced by BSParser#variable.
    def enterVariable(self, ctx:BSParser.VariableContext):
        pass

    # Exit a parse tree produced by BSParser#variable.
    def exitVariable(self, ctx:BSParser.VariableContext):
        pass


    # Enter a parse tree produced by BSParser#primary.
    def enterPrimary(self, ctx:BSParser.PrimaryContext):
        pass

    # Exit a parse tree produced by BSParser#primary.
    def exitPrimary(self, ctx:BSParser.PrimaryContext):
        pass


    # Enter a parse tree produced by BSParser#literal.
    def enterLiteral(self, ctx:BSParser.LiteralContext):
        pass

    # Exit a parse tree produced by BSParser#literal.
    def exitLiteral(self, ctx:BSParser.LiteralContext):
        pass


    # Enter a parse tree produced by BSParser#primitiveType.
    def enterPrimitiveType(self, ctx:BSParser.PrimitiveTypeContext):
        pass

    # Exit a parse tree produced by BSParser#primitiveType.
    def exitPrimitiveType(self, ctx:BSParser.PrimitiveTypeContext):
        pass


    # Enter a parse tree produced by BSParser#chemicalType.
    def enterChemicalType(self, ctx:BSParser.ChemicalTypeContext):
        pass

    # Exit a parse tree produced by BSParser#chemicalType.
    def exitChemicalType(self, ctx:BSParser.ChemicalTypeContext):
        pass


    # Enter a parse tree produced by BSParser#timeIdentifier.
    def enterTimeIdentifier(self, ctx:BSParser.TimeIdentifierContext):
        pass

    # Exit a parse tree produced by BSParser#timeIdentifier.
    def exitTimeIdentifier(self, ctx:BSParser.TimeIdentifierContext):
        pass


    # Enter a parse tree produced by BSParser#temperatureIdentifier.
    def enterTemperatureIdentifier(self, ctx:BSParser.TemperatureIdentifierContext):
        pass

    # Exit a parse tree produced by BSParser#temperatureIdentifier.
    def exitTemperatureIdentifier(self, ctx:BSParser.TemperatureIdentifierContext):
        pass


    # Enter a parse tree produced by BSParser#unitTracker.
    def enterUnitTracker(self, ctx:BSParser.UnitTrackerContext):
        pass

    # Exit a parse tree produced by BSParser#unitTracker.
    def exitUnitTracker(self, ctx:BSParser.UnitTrackerContext):
        pass



del BSParser