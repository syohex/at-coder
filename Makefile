.PHONY: format clean

format:
	git ls-files | grep -E '\.(c|cpp|cc|h)$$' | xargs clang-format -i

clean:
	find . -regex '.*\.\(out\|exe\|exp\|pdb\|lib\)' | xargs rm -f
