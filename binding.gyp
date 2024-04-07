{
  "targets": [
    {
      "target_name": "waveapi",
      "sources": [ "src/waveapi.cpp" ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "include"
      ],
      "libraries": [
        "-lcrypt32.lib"
      ]
    }
  ]
}
