use Rack::Static,
  :urls => ["/images", "../app_icons", "/js", "/css", "/fonts", "/app-page.html", "/final-page.html"],
  :root => "public"

run lambda { |env|
  [
    200,
    {
    'Content-Type'  => 'text/html',
  },
    File.open('public/index.html', File::RDONLY)
  ]
}
