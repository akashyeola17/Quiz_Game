.PHONY: clean All

All:
	@echo "----------Building project:[ QuizGame - Debug ]----------"
	@cd "QuizGame" && "$(MAKE)" -f  "QuizGame.mk"
clean:
	@echo "----------Cleaning project:[ QuizGame - Debug ]----------"
	@cd "QuizGame" && "$(MAKE)" -f  "QuizGame.mk" clean
