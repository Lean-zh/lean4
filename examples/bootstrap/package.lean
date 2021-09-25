import Lake.Package

open Lake System

def package : PackageConfig := {
  name := "lake"
  srcDir := FilePath.mk ".." / ".."
  oleanDir := "."
  leancArgs := #["-O3", "-DNDEBUG"]
  linkArgs :=
    if Platform.isWindows then
      #["-Wl,--export-all"]
    else
      #["-rdynamic"]
}
